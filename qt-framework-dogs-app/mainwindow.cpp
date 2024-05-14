#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "images.h"
#include "events.h"
#include "dogslist.h"

#include <QDebug>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    initializeImages(ui);
    ui->exitButton->installEventFilter(this);
    ui->rightArrowIcon->installEventFilter(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_exitButton_linkActivated()
{
    this->close();
}


void MainWindow::on_pushButton_2_clicked()
{
    hide();
    if(!dogsListWindow)
    {
        dogsListWindow = new DogsList(nullptr, this);
        dogsListWindow->setWindowFlags(Qt::FramelessWindowHint);
    }
    dogsListWindow->show();
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    m_nMouseClick_X_Coordinate = event->position().x();
    m_nMouseClick_Y_Coordinate = event->position().y();
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    move(event->globalPosition().x() - m_nMouseClick_X_Coordinate, event->globalPosition().y() - m_nMouseClick_Y_Coordinate);
}
