#ifndef DOGSLIST_H
#define DOGSLIST_H

#include <QMainWindow>
#include <QObject>
#include <QEvent>
#include <QMouseEvent>
#include <QVBoxLayout>

#include "viewdogwindow.h"

namespace Ui {
class DogsList;
}

class DogsList : public QMainWindow
{
    Q_OBJECT

public:
    explicit DogsList(QWidget *parent = nullptr, QWidget *parentWidget = nullptr);
    ~DogsList();
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    int m_nMouseClick_X_Coordinate;
    int m_nMouseClick_Y_Coordinate;


protected:
    void exportData();
    bool eventFilter(QObject* obj, QEvent* event) override;
    void openDogModal();
    bool fetchDogInfo(int dogId, QString &name, QString &race, QString &birthDate, QString &weight, QString &height, QString &lastVetVisit, QString &image);
    void addDog(const int& id, const QString& name, const QString& age, const QString& description, const QString& imagePath, QGridLayout *layout, int row, int col);
    void refetch();

private:
    Ui::DogsList *ui;
    QWidget *dogsFrame;
    QGridLayout *dogsLayout;
    ViewDogWindow *viewDogWindow = nullptr;
    QWidget *m_parentWidget;
};

#endif
