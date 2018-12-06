/*
 * Copyright (C) 2017 ~ 2017 Deepin Technology Co., Ltd.
 *
 * Author:     kirigaya <kirigaya@mkacg.com>
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "positionwidget.h"

#include <QHBoxLayout>
#include <QLabel>

using namespace dtb;
using namespace dtb::indicator;

PositionWidget::PositionWidget(QWidget *parent)
    : ContentModule(parent)
{
    QHBoxLayout *layout = new QHBoxLayout;
    layout->setMargin(0);
    layout->setSpacing(0);
    layout->setContentsMargins(10, 0, 10, 0);

    QLabel *posLbl = new QLabel(tr("Position"));

    layout->addWidget(posLbl, 0, Qt::AlignLeft | Qt::AlignVCenter);

    setLayout(layout);
}
