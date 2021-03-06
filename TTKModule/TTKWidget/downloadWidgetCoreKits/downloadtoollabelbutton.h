#ifndef DOWNLOADTOOLLABELBUTTON_H
#define DOWNLOADTOOLLABELBUTTON_H

/* =================================================
 * This file is part of the TTK Downloader project
 * Copyright (C) 2015 - 2018 Greedysky Studio

 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License along
 * with this program; If not, see <http://www.gnu.org/licenses/>.
 ================================================= */

#include <QToolButton>
#include "downloadglobaldefine.h"

class QLabel;

/*! @brief The class of the label tool button.
 * @author Greedysky <greedysky@163.com>
 */
class DOWNLOAD_WIDGET_EXPORT DownloadToolLabelButton : public QToolButton
{
    Q_OBJECT
public:
    /*!
     * Object contsructor.
     */
    explicit DownloadToolLabelButton(QWidget *parent = 0);

    /*!
     * Get class object name.
     */
    static QString getClassName();
    /*!
     * Set label text.
     */
    void setLabelText(const QString &text);
    /*!
     * Set label icon.
     */
    void setLabelIcon(const QString &icon);

Q_SIGNALS:
    /*!
     * Mouse clicked.
     */
    void mouseClicked();

protected:
    /*!
     * Override the widget event.
     */
    virtual void mousePressEvent(QMouseEvent *event) override;
    virtual void enterEvent(QEvent *event) override;
    virtual void leaveEvent(QEvent *event) override;
    virtual void paintEvent(QPaintEvent *event) override;

    bool m_enterIn;
    QString m_text, m_icon;

};

/*! @brief The class of the speed label tool button.
 * @author Greedysky <greedysky@163.com>
 */
class DOWNLOAD_WIDGET_EXPORT DownloadSpeedToolLabelButton : public QToolButton
{
    Q_OBJECT
public:
    /*!
     * Object contsructor.
     */
    explicit DownloadSpeedToolLabelButton(QWidget *parent = 0);

    /*!
     * Get class object name.
     */
    static QString getClassName();

    /*!
     * Set label text.
     */
    void setLabelText(const QString &up, const QString &down);

protected:
    /*!
     * Override the widget event.
     */
    virtual void enterEvent(QEvent *event) override;
    virtual void leaveEvent(QEvent *event) override;
    virtual void paintEvent(QPaintEvent *event) override;

    QString m_textUp, m_textDown;
    bool m_enterIn;

};


#endif // DOWNLOADTOOLLABELBUTTON_H
