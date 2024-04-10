#include "dogslist.h"
#include "mainwindow.h"
#include "ui_dogslist.h"

#include <QPixmap>
#include <QDebug>

DogsList::DogsList(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DogsList)
{
    ui->setupUi(this);
    ui->exitButton->installEventFilter(this);
    ui->homeLabelButton->installEventFilter(this);

    QPixmap exitButtonImage("../resources/images/exit.png");
    ui->exitButton->setPixmap(exitButtonImage);

    QPixmap navigationMenuLogo("../resources/images/logo-265x59.png");
    ui->navigationMenuLogo->setPixmap(navigationMenuLogo);

    QPixmap pawIconOnTheEdge("../resources/images/background-particle-132x141.png");
    ui->pawIconOnTheEdge_2->setPixmap(pawIconOnTheEdge);
}

DogsList::~DogsList()
{
    delete ui;
}

bool DogsList::eventFilter(QObject* obj, QEvent* event) {
    if (obj == ui->exitButton) {
        if (event->type() == QEvent::MouseButtonPress) {
            QMouseEvent* mouseEvent = dynamic_cast<QMouseEvent*>(event);
            if (mouseEvent && mouseEvent->button() == Qt::LeftButton) {
                QCoreApplication::quit();
                return true;
            }
        }
    }

    if (obj == ui->homeLabelButton) {
        if (event->type() == QEvent::MouseButtonPress) {
            QMouseEvent* mouseEvent = dynamic_cast<QMouseEvent*>(event);
            if (mouseEvent && mouseEvent->button() == Qt::LeftButton) {
                close();
                return true;
            }
        }
    }
    return QObject::eventFilter(obj, event);
}
