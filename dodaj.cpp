#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include "dodaj.h"
#include "ui_dodaj.h"

Dodaj::Dodaj(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dodaj)
{
    ui->setupUi(this);


    connect(ui->dodajButton, &QPushButton::clicked, this, &Dodaj::dodajButton_clicked);
}

Dodaj::~Dodaj()
{
    delete ui;
}

void Dodaj::dodajButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::database();

    if (db.isOpen())
    {
        QSqlQuery query(db);
        query.prepare("INSERT INTO dog (name, race, gender, birth_date, weight, height, vaccinations, last_vet_visit, image) "
                      "VALUES (:name, :race, :gender, :birth_date, :weight, :height, :vaccinations, :last_vet_visit, :image)");
        query.bindValue(":name", ui->lineEdit->text());
        query.bindValue(":race", ui->lineEdit_2->text());
        query.bindValue(":gender", 0); // 0 za mužjaka
        query.bindValue(":gender", 1); // 1 za ženku
        query.bindValue(":birth_date", ui->dateEdit->date().toString("yyyy-MM-dd"));
        query.bindValue(":weight", ui->lineEdit_3->text().toFloat());
        query.bindValue(":height", ui->lineEdit_4->text().toFloat());
        query.bindValue(":vaccinations", 0); // 0 ako nije cijepljen
        query.bindValue(":vaccinations", 1); // 1 ako jeste cijepljen

        query.bindValue(":birth_date", ui->dateEdit->date().toString("yyyy-MM-dd"));

        query.bindValue(":image", ui->lineEdit_7->text());

        if (query.exec())
        {
            qDebug() << "Podaci uspješno uneseni u bazu podataka!";
        }
        else
        {
            qDebug() << "Greška prilikom unosa podataka u bazu podataka:" << query.lastError().text();
        }
    }
    else
    {
        qDebug() << "Nije uspostavljena veza s bazom podataka!";
    }
}
