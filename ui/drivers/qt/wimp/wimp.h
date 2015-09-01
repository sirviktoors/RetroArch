/* RetroArch - A frontend for libretro.
 *  Copyright (C) 2011-2015 - Andres Suarez
 *
 * RetroArch is free software: you can redistribute it and/or modify it under the terms
 * of the GNU General Public License as published by the Free Software Found-
 * ation, either version 3 of the License, or (at your option) any later version.
 *
 * RetroArch is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 * PURPOSE. See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with RetroArch.
 * If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef WIMP_H
#define WIMP_H

#include "wimp_global.h"
#include <QtWidgets/qwidget.h>
#include <QtWidgets/qapplication.h>
#include <QtQml/qqmlapplicationengine.h>
#include <QtQuick/qquickwindow.h>
#include "configuration.h"

class WIMPSHARED_EXPORT Wimp : public QGuiApplication
{
    QQuickWindow *window;
    settings_t *settings;

    Q_OBJECT
    public:
        Wimp(int argc, char *argv[]): QGuiApplication(argc, argv) {}
        int CreateMainWindow();
        void SetTitle(char* title);
        void ConfigGetPtr(settings_t* settings);

};

#endif // WIMP_H
