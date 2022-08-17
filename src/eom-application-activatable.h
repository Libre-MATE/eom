/*
 * eom-application-activatable.h
 * This file is part of eom
 *
 * Author: Felix Riemann <friemann@gnome.org>
 *
 * Copyright (C) 2012 Felix Riemann
 * Copyright (C) 2013-2021 MATE developers
 *
 * Base on code by:
 * 	- Steve Frécinaux <code@istique.net>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef __EOM_APPLICATION_ACTIVATABLE_H__
#define __EOM_APPLICATION_ACTIVATABLE_H__

#include <glib-object.h>

G_BEGIN_DECLS

#define EOM_TYPE_APPLICATION_ACTIVATABLE \
  (eom_application_activatable_get_type())
G_DECLARE_INTERFACE (EomApplicationActivatable, eom_application_activatable,
                     EOM, APPLICATION_ACTIVATABLE, GObject);

struct _EomApplicationActivatableInterface {
  GTypeInterface g_iface;

  /* vfuncs */

  void (*activate)(EomApplicationActivatable *activatable);
  void (*deactivate)(EomApplicationActivatable *activatable);
};

void eom_application_activatable_activate(
    EomApplicationActivatable *activatable);
void eom_application_activatable_deactivate(
    EomApplicationActivatable *activatable);

G_END_DECLS
#endif /* __EOM_APPLICATION_ACTIVATABLE_H__ */
