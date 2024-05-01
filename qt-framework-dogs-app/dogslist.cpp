#include "dogslist.h"
#include "qscrollarea.h"
#include "ui_dogslist.h"
#include "database.h"

#include <QPixmap>
#include <QFileDialog>
#include <QGridLayout>
#include <QWidget>
#include <QDebug>

DogsList::DogsList(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::DogsList)
{
    ui->setupUi(this);
    ui->exitButton->installEventFilter(this);
    ui->homeLabelButton->installEventFilter(this);
    ui->navigationMenuLogo->installEventFilter(this);

    QPixmap exitButtonImage("../resources/images/exit.png");
    ui->exitButton->setPixmap(exitButtonImage);

    QPixmap navigationMenuLogo("../resources/images/logo-265x59.png");
    ui->navigationMenuLogo->setPixmap(navigationMenuLogo);

    QPixmap pawIconOnTheEdge("../resources/images/background-particle-132x141.png");
    ui->pawIconOnTheEdge_2->setPixmap(pawIconOnTheEdge);

    QSqlDatabase& db = DatabaseManager::getDatabaseInstance();
    QSqlQuery query(db);

    QScrollArea *scrollArea = new QScrollArea(this);
    scrollArea->setMinimumSize(1241, 521);
    scrollArea->setGeometry(55, 235, 1241, 521);
    scrollArea->setWidgetResizable(true);
    scrollArea->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    QWidget *dogsFrame = new QWidget(scrollArea);
    QGridLayout *dogsLayout = new QGridLayout(dogsFrame);
    dogsLayout->setVerticalSpacing(20);

    int columns = 4;
    int row = 0;
    int col = 0;

    if (query.exec("SELECT * FROM dog")) {
        while (query.next()) {
            int id = query.value("id").toInt() - 1;
            addDog(id, query.value("name").toString(), "("+query.value("birth_date").toString()+")", query.value("race").toString(), query.value("image").toString(), dogsLayout, row, col);
            col++;
            if (col == columns) {
                col = 0;
                row++;
            }
        }
    } else {
        qDebug() << "Query execution failed:" << query.lastError().text();
    }

    scrollArea->setWidget(dogsFrame);
    QVBoxLayout *mainLayout = new QVBoxLayout(this);
    mainLayout->addWidget(scrollArea);

    setLayout(mainLayout);
    connect(ui->exportButton, &QPushButton::clicked, this, &DogsList::exportData);
}

DogsList::~DogsList()
{
    delete ui;
}

void DogsList::addDog(const int& id, const QString& name, const QString& age, const QString& description, const QString& imagePath, QGridLayout *layout, int row, int col) {
    QFrame* dogFrame = new QFrame(this);
    dogFrame->setObjectName("dogFrame_" + name + age);
    dogFrame->setMinimumSize(291, 281);
    dogFrame->setMaximumSize(291, 281);
    dogFrame->setStyleSheet("background-color: #D9D9D9; border-radius: 20px; height: 50px;");

    QLabel* imageLabel = new QLabel(dogFrame);
    QPixmap dogImage("../resources/images/dogs/" + imagePath);
    imageLabel->setPixmap(dogImage);
    imageLabel->setMinimumSize(251, 281);
    imageLabel->setMaximumSize(251, 281);
    imageLabel->setAlignment(Qt::AlignCenter);
    imageLabel->lower();

    QFrame* infoFrame = new QFrame(dogFrame);
    infoFrame->setObjectName("infoFrame_" + name + age);
    infoFrame->setMinimumSize(291, 72);
    infoFrame->setMaximumSize(291, 72);
    infoFrame->setStyleSheet("width: 100%; background-color: rgba(233,228,212, 0.9); border-top-left-radius: 0px !important; border-top-right-radius: 0px !important; border-bottom-left-radius: 20px !important; border-bottom-right-radius: 20px !important; ");
    infoFrame->setGeometry(0, 281 - 72, 291, 72);

    QLabel* nameLabel = new QLabel(name, infoFrame);
    nameLabel->setStyleSheet("font-size: 22px; color: #017F36; font-weight: bold; background-color: transparent;");
    nameLabel->adjustSize();
    int textWidth = nameLabel->sizeHint().width();
    nameLabel->setGeometry(20, 10, textWidth, 30);

    QLabel* ageLabel = new QLabel(age, infoFrame);
    ageLabel->setStyleSheet("font-size: 14px; color: #444; background-color: transparent;");
    ageLabel->setGeometry(80, 40, 150, 50);

    int ageLabelX = nameLabel->x() + textWidth + 8;
    ageLabel->adjustSize();
    ageLabel->setGeometry(ageLabelX, nameLabel->y() + 3, ageLabel->sizeHint().width(), 25);

    QLabel* descriptionLabel = new QLabel(description, infoFrame);
    descriptionLabel->setStyleSheet("font-size: 15px; color: #444; background-color: transparent;");
    descriptionLabel->setGeometry(21, 20, 150, 50);

    QLabel* infoIcon = new QLabel(infoFrame);
    QPixmap infoIconUrl("../resources/images/more-info-icon.png");
    infoIcon->setPixmap(infoIconUrl);
    infoIcon->setAlignment(Qt::AlignCenter);
    infoIcon->setGeometry(291 - 60, 12, 50, 50);
    infoIcon->setCursor(Qt::PointingHandCursor);
    infoIcon->lower();

    layout->addWidget(dogFrame, row, col);
}

bool DogsList::eventFilter(QObject* obj, QEvent* event)
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

    if (obj == ui->homeLabelButton || obj == ui->navigationMenuLogo)
    {
        if (event->type() == QEvent::MouseButtonPress)
        {
            QMouseEvent* mouseEvent = dynamic_cast<QMouseEvent*>(event);
            if (mouseEvent && mouseEvent->button() == Qt::LeftButton)
            {
                close();
                return true;
            }
        }
    }
    return QObject::eventFilter(obj, event);
}
void DogsList::exportData()
{
    QString filePath = QFileDialog::getSaveFileName(this, "Save Dogs Data", QDir::currentPath(), "Text Files (*.txt)");
    if (!filePath.isEmpty()) {
        QFile file(filePath);
        if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
            QTextStream out(&file);

            QSqlDatabase& db = DatabaseManager::getDatabaseInstance();
            QSqlQuery query(db);

            if (query.exec("SELECT * FROM dog")) {
                while (query.next()) {
                    QString id = query.value("id").toString();
                    QString name = query.value("name").toString();
                    QString race = query.value("race").toString();
                    QString gender = query.value("gender").toString();
                    QString birthDate = query.value("birth_date").toString();
                    QString weight = query.value("weight").toString();
                    QString height = query.value("height").toString();
                    QString vaccinations = query.value("vaccinations").toString();
                    QString lastVetVisit = query.value("last_vet_visit").toString();
                    QString image = query.value("image").toString();


                    out << id << "|" << name << "|" << race << "|" << gender << "|" << birthDate << "|"
                        << weight << "|" << height << "|" << vaccinations << "|" << lastVetVisit << "|" << image << "\n";
                }
                file.close();
                qDebug() << "Data exported successfully to" << filePath;
            } else {
                qDebug() << "Query execution failed:" << query.lastError().text();
                file.remove(); // brise query ako se ne napravi novi file
            }
        } else {
            qDebug() << "Failed to open file for writing";
        }
    }
}
