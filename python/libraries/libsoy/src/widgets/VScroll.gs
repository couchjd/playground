/*
 *  libsoy - soy.widgets.VScroll
 *  Copyright (C) 2006-2014 Copyleft Games Group
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU Affero General Public License as published
 *  by the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Affero General Public License for more details.
 *
 *  You should have received a copy of the GNU Affero General Public License
 *  along with this program; if not, see http://www.gnu.org/licenses
 *
 */

[indent=4]
uses
    GL


class soy.widgets.VScroll : soy.widgets.Scroller
    // We can move these to Scroller probably
    _viewPort : soy.atoms.Size
    _hasBar : bool
    _vbuffer : static GLuint // Vertex Buffer
    _ibuffer : static GLuint // Index Buffer
    _totalHeight : float
    _scrollHeight : float

    // These verts form a 1x1 square with 2 tris (A and B) :
    //          3----2
    //          | B/ |
    //          | /A |
    //          0----1
    //
    //                                     px     py
    _verts : static array of GLfloat =  {-1.0f, -1.0f,  // 0,0
                                          1.0f, -1.0f,  // 1,0
                                          1.0f,  1.0f,  // 1,1
                                         -1.0f,  1.0f}  // 0,1

    //                                    face A    face B
    _faces : static array of GLushort = { 0, 1, 2, 2, 3, 0 }
    _program : static GLuint

    construct ()
        _viewPort = new soy.atoms.Size(self.size.width, self.size.height)
        _hasBar = false
        self.scrollPosition = new soy.atoms.Position()


    def override render (x: int, y : int, width : int, height : int)
#if !WINDOWS
        // Render each child widget in order
        var _x = x
        var _y = y
        for widget in self.children
            widget.render(_x, _y, widget.width, widget.height)
            _y += widget.height
        if not _hasBar
            return

        if _vbuffer == 0 or _ibuffer == 0
            //
            ///////////////////////////////////////
            // The Vertex and Index buffers are not initialized
            //
            buffers : array of GLuint = {0,0}
            glGenBuffers(buffers)
            _vbuffer = buffers[0]
            _ibuffer = buffers[1]
            glBindBuffer(GL_ARRAY_BUFFER, _vbuffer)
            glBufferData(GL_ARRAY_BUFFER, (GL.GLsizei) sizeof(GLfloat) * 8,
                         _verts, GL_STATIC_DRAW)
            glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, _ibuffer)
            glBufferData(GL_ELEMENT_ARRAY_BUFFER,
                         (GL.GLsizei) sizeof(GLushort) * 6, _faces,
                         GL_STATIC_DRAW)
            // Setup shaders
            status : GLint
            vertex_shader : array of GLchar* = {Widget.basic_glslv.data}
            fragment_shader : array of GLchar* = {Widget.basic_glslf.data}
            // initialize vertex shader
            vertex_shader_id : GLuint = glCreateShader(GL_VERTEX_SHADER)
            glShaderSource(vertex_shader_id, 1, vertex_shader, {-1})
            glCompileShader(vertex_shader_id)

            // check compile status
            glGetShaderiv(vertex_shader_id, GL_COMPILE_STATUS, out status)
            assert status is not (GLint) GL_FALSE

            // initialize fragment shader
            fragment_shader_id : GLuint = glCreateShader(GL_FRAGMENT_SHADER)
            glShaderSource(fragment_shader_id, 1, fragment_shader, {-1})
            glCompileShader(fragment_shader_id)

            // check compile status
            glGetShaderiv(fragment_shader_id, GL_COMPILE_STATUS, out status)
            assert status is not (GLint) GL_FALSE

            // initialize program
            _program = glCreateProgram()
            glAttachShader(_program, vertex_shader_id)
            glAttachShader(_program, fragment_shader_id)
            glBindAttribLocation(_program, 0, "vertex")
            glLinkProgram(_program)

            // check link status
            glGetProgramiv(_program, GL_LINK_STATUS, out status)
            assert status is not (GLint) GL_FALSE

            // cleanup
            glDetachShader(_program, vertex_shader_id)
            glDeleteShader(vertex_shader_id)
            glDetachShader(_program, fragment_shader_id)
            glDeleteShader(fragment_shader_id)
        else
            //
            // Just use the buffers that have been previously created
            glBindBuffer(GL_ARRAY_BUFFER, _vbuffer)
            glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, _ibuffer)

        glUseProgram(_program)
        color_loc : GLint = glGetUniformLocation(_program, "color")
        glUniform4f(color_loc, 1, 1, 1, 1)

        var _posy = 0.0//_totalHeight - _viewPort.height
        //viewport of the entire scrollbar
        glViewport((GLint) _viewPort.width, (GLint) _posy,
                   (GLint) self.scrollbarThickness, (GLint) self.size.height)

        glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, (GLsizei) 0, null)
        glEnableVertexAttribArray(0)

        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_SHORT,(void *) 0)

        glUniform4f(color_loc, 0, 1, 0, 1)

        //viewport of the scroll itself
        var viewPort2Height = 0.0
        if self.size.height < _totalHeight
            viewPort2Height = (self.size.height/ _totalHeight *
                               self.size.height)
        glViewport((GLint) _viewPort.width, (GLint) self.scrollPosition.y , (GLint) self.scrollbarThickness, (GLint) viewPort2Height)

        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_SHORT,(void *) 0)

        glDisableVertexAttribArray(0)
#else
        print "VScroll: glext not currently supported on Windows"
#endif


    def override resize_children (x: int, y : int, width : int, height : int)
        _totalHeight = 0.0f
        for widget in self.children
            //increment total height with each child's width
            _totalHeight += widget.size.height
            //truncate children's width if it's greater than widget's
            if widget.size.width > self.size.width
                widget.size.width = self.size.width
        //if total content height is greater than widget's height, the bar is needed
        if _totalHeight > self.size.height
            _hasBar = true
            for widget in self.children
                //reduces the children's height, if needed, to fit the scrollbar
                if widget.size.width >= self.size.width - self.scrollbarThickness
                    widget.size.width -= self.scrollbarThickness

        // Change the viewPort only if widgets total size are greater than VScroll size
        var viewPortHeight = 0.0f
        if _hasBar
            viewPortHeight = self.size.height
        else
            viewPortHeight = _totalHeight

        var viewPortWidth = 0.0f
        if _hasBar
            viewPortWidth = self.size.width - self.scrollbarThickness
        else
            viewPortWidth = self.size.width

        //_viewPort = new soy.atoms.Size(viewPortWidth, viewPortHeight, 0.0)
        _viewPort.width = viewPortWidth
        _viewPort.height = viewPortHeight
        // The height of the scroll. Determined by the scrollbar height divided by
        // the total content height. If widget height is greater or equal than
        // total content height, scroll size is 0.
        if self.size.height >= _totalHeight
            _scrollHeight = 0
        else
            _scrollHeight =  (self.size.height / _totalHeight *
                                   self.size.height)

        //var _posy = self.parent.height - _totalHeight + _scrollHeight

        //left-bottom position.
        self.scrollPosition.x = _viewPort.width
        self.scrollPosition.y = _viewPort.height - _scrollHeight

        //print "Bar X, Y = %f, %f", _viewPort.width, _posy
        //print "Bar width x height = %.2fx%.2f", self.scrollbarThickness, _scrollHeight
        self.scrollbarSize = new soy.atoms.Size(self.scrollbarThickness,
                                                _scrollHeight)


    def override motion_handler (e: events.Motion)
        if drag
            var offset = self.convertY(e.y) - self.ystartdrag

            self.scrollPosition.y = self.ypos_startdrag + offset

            self.scrollPosition.y = float.max(self.scrollPosition.y, 0.0f)
            self.scrollPosition.y = float.min(self.scrollPosition.y,
                                              (_viewPort.height -
                                               _scrollHeight))


    def override scroll_handler(e : events.Scroll)
        case e.direction
            when soy.ScrollDirection.Up
                self.scrollPosition.y += 10
                self.scrollPosition.y = float.min(self.scrollPosition.y,
                                                  (_viewPort.height -
                                                   _scrollHeight))
            when soy.ScrollDirection.Down
                self.scrollPosition.y -= 10
                self.scrollPosition.y = float.max(self.scrollPosition.y, 0.0f)
