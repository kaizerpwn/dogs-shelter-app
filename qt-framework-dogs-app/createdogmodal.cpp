
#include <QMouseEvent>

#include "database.h"
#include "createdogmodal.h"
#include "ui_createdogmodal.h"

CreateDogModal::CreateDogModal(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CreateDogModal)
{
    ui->setupUi(this);
    ui->lastVetVisitInput->setText("");
    ui->vaccineNumberInput->setText("");
    ui->nameInput->setText("");
    ui->raceInput->setText("");
    ui->heightInput->setText("");
    ui->weightInput->setText("");
    ui->imageUrlInput->setText("");
    ui->birthDateInput->setText("");
    ui->exitButton->installEventFilter(this);
    setWindowFlags(Qt::FramelessWindowHint);

    QPixmap exitButtonImage("../resources/images/exit3.png");
    ui->exitButton->setPixmap(exitButtonImage);

    move(693, 314);
}

void CreateDogModal::mousePressEvent(QMouseEvent *event)
{
    m_nMouseClick_X_Coordinate = event->position().x();
    m_nMouseClick_Y_Coordinate = event->position().y();
}

void CreateDogModal::mouseMoveEvent(QMouseEvent *event)
{
    move(event->globalPosition().x() - m_nMouseClick_X_Coordinate, event->globalPosition().y() - m_nMouseClick_Y_Coordinate);
}

bool CreateDogModal::eventFilter(QObject* obj, QEvent* event)
{
    if (obj == ui->exitButton)
    {
        if (event->type() == QEvent::MouseButtonPress)
        {
            QMouseEvent* mouseEvent = dynamic_cast<QMouseEvent*>(event);
            if (mouseEvent && mouseEvent->button() == Qt::LeftButton)
            {
                hide();
                return true;
            }
        }
    }
    return QObject::eventFilter(obj, event);
}

CreateDogModal::~CreateDogModal()
{
    delete ui;
}

void CreateDogModal::on_pushButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::database();

    if (db.isOpen())
    {
        QSqlQuery query(db);
        query.prepare("INSERT INTO dog (name, race, gender, birth_date, weight, height, vaccinations, last_vet_visit, image) "
                      "VALUES (:name, :race, :gender, :birth_date, :weight, :height, :vaccinations, :last_vet_visit, :image)");
        query.bindValue(":name", ui->nameInput->text());
        query.bindValue(":race", ui->raceInput->text());
        query.bindValue(":gender", 1);
        query.bindValue(":birth_date", ui->birthDateInput->text());
        query.bindValue(":weight", ui->weightInput->text().toFloat());
        query.bindValue(":height", ui->heightInput->text().toFloat());
        query.bindValue(":vaccinations", ui->vaccineNumberInput->text());
        query.bindValue(":last_vet_visit", ui->lastVetVisitInput->text());
        query.bindValue(":image", ui->imageUrlInput->text());

        if (query.exec())
        {
            qDebug() << "New dog successfully added to the database!";
            hide();
        }
        else
        {
            qDebug() << "An error occurred while adding a new dog:" << query.lastError().text();
        }
    }
    else
    {
        qDebug() << "Database connection failed!";
    }
}

