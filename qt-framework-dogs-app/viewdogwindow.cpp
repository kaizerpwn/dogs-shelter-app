
#include "viewdogwindow.h"
#include "ui_viewdogwindow.h"

ViewDogWindow::ViewDogWindow(QWidget *parent, QWidget *parentWidget)
    : QWidget(parent), ui(new Ui::ViewDogWindow), m_parentWidget(parentWidget)
{
    ui->setupUi(this);
    ui->exitButton->installEventFilter(this);
    ui->homeLabelButton->installEventFilter(this);
    ui->navigationMenuLogo->installEventFilter(this);
    ui->backToTheDogsListButton->installEventFilter(this);

    QPixmap navigationMenuLogo("../resources/images/logo-265x59.png");
    ui->navigationMenuLogo->setPixmap(navigationMenuLogo);

    QPixmap pawIconOnTheEdge("../resources/images/background-particle-132x141.png");
    ui->pawIconOnTheEdge_2->setPixmap(pawIconOnTheEdge);

    QPixmap exitButtonImage("../resources/images/exit.png");
    ui->exitButton->setPixmap(exitButtonImage);

    QPixmap backToTheDogsListImage("../resources/images/back.png");
    ui->backToTheDogsListButton->setPixmap(backToTheDogsListImage);

    QPixmap dogInfoMessageImage("../resources/images/dog_info_message.png");
    ui->infoDogsImage->setPixmap(dogInfoMessageImage);

    QPixmap deleteDogButtonImage("../resources/images/delete.png");
    ui->deleteDogButton->setPixmap(deleteDogButtonImage);
}

ViewDogWindow::~ViewDogWindow()
{
    delete ui;
}

void ViewDogWindow::mousePressEvent(QMouseEvent *event)
{
    m_nMouseClick_X_Coordinate = event->position().x();
    m_nMouseClick_Y_Coordinate = event->position().y();
}

void ViewDogWindow::mouseMoveEvent(QMouseEvent *event)
{
    move(event->globalPosition().x() - m_nMouseClick_X_Coordinate, event->globalPosition().y() - m_nMouseClick_Y_Coordinate);
}

bool ViewDogWindow::eventFilter(QObject* obj, QEvent* event)
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

    if (obj == ui->homeLabelButton || obj == ui->navigationMenuLogo || obj == ui->backToTheDogsListButton)
    {
        if (event->type() == QEvent::MouseButtonPress)
        {
            QMouseEvent* mouseEvent = dynamic_cast<QMouseEvent*>(event);
            if (mouseEvent && mouseEvent->button() == Qt::LeftButton)
            {
                hide();
                m_parentWidget->show();
                return true;
            }
        }
    }
    return QObject::eventFilter(obj, event);
}

void ViewDogWindow::setDogInfo(const QString &name, const QString &race, const QString &birthDate, const QString &weight, const QString &height, const QString &lastVetVisit, const QString &image)
{
    QPixmap deleteDogButtonImage("../resources/images/dogs/" + image);
    ui->dogsImage->setPixmap(deleteDogButtonImage);

    ui->dogsName->setText(name);
    ui->dogsShortDescription->setText(race);
    ui->birthDateLabel->setText(birthDate);
    ui->weightLabel->setText(weight);
    ui->heightLabel->setText(height);
    ui->lastVetVisitLabel->setText(lastVetVisit);
}
