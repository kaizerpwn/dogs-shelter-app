#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "images.h"
#include "events.h"

#include <QDir>
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

void MainWindow::on_exitButton_linkActivated(const QString &link)
{
    close();
}

