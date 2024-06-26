#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QObject>
#include <QEvent>
#include <QPoint>

#include "dogslist.h"

QT_BEGIN_NAMESPACE
namespace Ui {
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    bool eventFilter(QObject* obj, QEvent* event) override;

private slots:
    void on_exitButton_linkActivated();
    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    int m_nMouseClick_X_Coordinate;
    int m_nMouseClick_Y_Coordinate;
    DogsList *dogsListWindow = nullptr;
};

#endif
