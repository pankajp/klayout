
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2017 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

#ifndef _HDR_gsiDeclQtTypeTraits
#define _HDR_gsiDeclQtTypeTraits

#if defined(HAVE_QTBINDINGS)

#if QT_VERSION >= 0x050000
#  include "../gsiqt5/gsiDeclQtTypeTraits.h"
#else
#  include "../gsiqt4/gsiDeclQtTypeTraits.h"
#endif

#endif

#endif

