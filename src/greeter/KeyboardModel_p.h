/***************************************************************************
* Copyright (c) 2013 Nikita Mikhaylov <nslqqq@gmail.com>
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the
* Free Software Foundation, Inc.,
* 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
***************************************************************************/

#ifndef KEYBOARDMODEL_P_H
#define KEYBOARDMODEL_P_H

#include <QtCore/QObject>

namespace SDDM {
    class GreeterProxy;

    struct Indicator {
        bool enabled { false };
        uint8_t mask { 0 };
    };

    class KeyboardModelPrivate {
    public:
        // is extension enabled
        bool enabled { true };

        // indicator state
        Indicator numlock, capslock;

        // Layouts
        int layout_id { 0 };
        QList<QObject*> layouts;
        GreeterProxy *m_proxy = nullptr;
    };
}

#endif // KEYBOARDMODEL_P_H
