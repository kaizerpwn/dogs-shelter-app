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
    DogsList *dogsListForm = new DogsList(this);
    dogsListForm->setWindowFlags(Qt::FramelessWindowHint);
    dogsListForm->show();
}

