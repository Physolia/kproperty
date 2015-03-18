/* This file is part of the KDE project
   Copyright (C) 2008 Jarosław Staniek <staniek@kde.org>

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public License
   along with this library; see the file COPYING.LIB.  If not, write to
   the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
*/

#ifndef KPROPERTY_EDITORS_UTILS_H
#define KPROPERTY_EDITORS_UTILS_H

#include "kproperty_export.h"

#include <QString>

class QPushButton;

namespace KoProperty {

namespace Utils {

//! Sets up a "..." button with fine-tuned settings.
KPROPERTY_EXPORT void setupDotDotDotButton(QPushButton *button,
    const QString& toolTip = QString(), const QString& whatsThis = QString());

}

}

#endif

