/**********************************************************************
** This file is part of Qevel, a cross-platform file manager.
** Copyright (C) 2009 qevel.org
**
** Qevel is free software: you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation, either version 3 of the License, or
** (at your option) any later version.
**
** Qevel is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with Qevel. If not, see <http://www.gnu.org/licenses/>.
**********************************************************************/

#ifndef ABOUT_DIALOG_H
#define ABOUT_DIALOG_H

#include <QtCore/QString>
#include <QtGui/QDialog>


namespace Ui
{
    class AboutDialog;
}

class AboutDialog : public QDialog
{
    Q_OBJECT

public:
    AboutDialog (QWidget * parent = 0);
    ~AboutDialog ();

private slots:
    void showLicense ();

private:
    const QString description () const;

    Ui::AboutDialog * m_ui;

};

#endif // ABOUT_DIALOG_H
