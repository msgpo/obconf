/* -*- indent-tabs-mode: nil; tab-width: 4; c-basic-offset: 4; -*-

   dock.h for ObConf, the configuration tool for Openbox
   Copyright (c) 2003-2007   Dana Jansens
   Copyright (c) 2003        Tim Riley

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   See the COPYING file for a copy of the GNU General Public License.
*/

#ifndef obconf__dock_h
#define obconf__dock_h

#include <gtk/gtk.h>

void dock_setup_position   (GtkWidget *w);
void dock_setup_float_x    (GtkWidget *w);
void dock_setup_float_y    (GtkWidget *w);
void dock_setup_stacking   (GtkWidget *top,
                            GtkWidget *normal, GtkWidget *bottom);
void dock_setup_direction  (GtkWidget *w);
void dock_setup_hide       (GtkWidget *w);
void dock_setup_hide_delay (GtkWidget *w);

#endif