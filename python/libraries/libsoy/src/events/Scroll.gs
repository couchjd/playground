/*
 *  libsoy - soy.events.Scroll
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

struct soy.events.Scroll
    // Event type
    type : soy.EventType
    // Soy window
    window : soy.widgets.Window
    // The time of the event in milliseconds.
    time : uint32
    // The x coordinate of the pointer relative to the window.
    x : float 
    // The y coordinate of the pointer relative to the window.
    y : float 
    // The x coordinate of the pointer relative to the root of the screen.
    x_root : float 
    // The y coordinate of the pointer relative to the root of the screen.
    y_root : float 
    // Scroll direction
    direction : soy.ScrollDirection
