// Dodaj.h
#ifndef DODAJ_H
#define DODAJ_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Dodaj; }
QT_END_NAMESPACE

class Dodaj : public QDialog
{
    Q_OBJECT

public:
    Dodaj(QWidget *parent = nullptr);
    ~Dodaj();

private slots:
    void dodajButton_clicked();

private:
    Ui::Dodaj *ui;
};

#endif // DODAJ_H
