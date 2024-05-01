#include "doginfodialog.h"
#include "ui_doginfodialog.h"

#include <QMouseEvent>

DogInfoDialog::DogInfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DogInfoDialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    QPixmap exitButtonImage("../resources/images/exit2.png");
    ui->exitButton->setPixmap(exitButtonImage);
    ui->exitButton->installEventFilter(this);
}

DogInfoDialog::~DogInfoDialog()
{
    delete ui;
}

void DogInfoDialog::setDogInfo(const QString &name, const QString &race, const QString &birthDate, const QString &weight, const QString &height, const QString &lastVetVisit)
{
    ui->nameLabel->setText(name);
    ui->raceLabel->setText(race);
    ui->birthDateLabel->setText(birthDate);
    ui->weightLabel->setText(weight);
    ui->heightLabel->setText(height);
    ui->lastVetVisitDateLabelL->setText(lastVetVisit);
}


bool DogInfoDialog::eventFilter(QObject* obj, QEvent* event)
{
    if (obj == ui->exitButton)
    {
        if (event->type() == QEvent::MouseButtonPress)
        {
            QMouseEvent* mouseEvent = dynamic_cast<QMouseEvent*>(event);
            if (mouseEvent && mouseEvent->button() == Qt::LeftButton)
            {
                this->close();
                return true;
            }
        }
    }
    return QObject::eventFilter(obj, event);
}
