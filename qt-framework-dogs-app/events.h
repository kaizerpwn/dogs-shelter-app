#ifndef EVENTS_H
#define EVENTS_H

#include "dogslist.h"
#include <QMouseEvent>

bool MainWindow::eventFilter(QObject* obj, QEvent* event)
{
    if (obj == ui->exitButton)
    {
        if (event->type() == QEvent::MouseButtonPress)
        {
            QMouseEvent* mouseEvent = dynamic_cast<QMouseEvent*>(event);
            if (mouseEvent && mouseEvent->button() == Qt::LeftButton)
            {
                QCoreApplication::quit();
                return true;
            }
        }
    }

    if (obj == ui->rightArrowIcon)
    {
        if (event->type() == QEvent::MouseButtonPress)
        {
            QMouseEvent* mouseEvent = dynamic_cast<QMouseEvent*>(event);
            if (mouseEvent && mouseEvent->button() == Qt::LeftButton)
            {
                DogsList *dogsListForm = new DogsList(this);
                dogsListForm->setWindowFlags(Qt::FramelessWindowHint);
                dogsListForm->show();
                return true;
            }
        }
    }
    return QObject::eventFilter(obj, event);
}

#endif
