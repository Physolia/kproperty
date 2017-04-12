/* This file is part of the KDE project
   Copyright (C) 2009 Jarosław Staniek <staniek@kde.org>

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

#ifndef KPROPERTY_PROPERTY_P_H
#define KPROPERTY_PROPERTY_P_H

#include <QFlags>

//! Default value for "step" option. Used for spin boxes, etc.
#define KPROPERTY_DEFAULT_DOUBLE_VALUE_STEP 0.01

//! Default value for "precision" option. Used for spin boxes, etc.
#define KPROPERTY_DEFAULT_DOUBLE_VALUE_PRECISION 2

//! @todo Used only in 3.0 to keep BC
class KPropertyPrivate
{
public:
    //! Option for handling values
    //! @todo Move to KProperty in 3.1
    enum ValueOption {
        RememberOldValue = 1,   //!< Remeber old value before setting a new one
        UseComposedProperty = 2 //!< Use composed property when comparing values
    };
    Q_DECLARE_FLAGS(ValueOptions, ValueOption)

private:
    KPropertyPrivate() {}
    Q_DISABLE_COPY(KPropertyPrivate)
};

Q_DECLARE_OPERATORS_FOR_FLAGS(KPropertyPrivate::ValueOptions)

#endif
