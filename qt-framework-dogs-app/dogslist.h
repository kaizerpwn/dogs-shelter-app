#ifndef DOGSLIST_H
#define DOGSLIST_H

#include <QMainWindow>
#include <QObject>
#include <QEvent>
#include <QMouseEvent>
#include <QtSql>
#include <QSqlDatabase>

namespace Ui {
class DogsList;
}

class DogsList : public QMainWindow
{
    Q_OBJECT

public:
    explicit DogsList(QWidget *parent = nullptr);
    ~DogsList();

protected:
    bool eventFilter(QObject* obj, QEvent* event) override;
private:
    Ui::DogsList *ui;
};

#endif
