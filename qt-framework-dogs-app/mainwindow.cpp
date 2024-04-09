#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QDir>
#include <QDebug>
#include <QLabel>
#include <QMouseEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);

    QPixmap dogHeaderImage("../resources/images/dog-header.png");
    ui->dogHeaderImage->setPixmap(dogHeaderImage);

    QPixmap navigationMenuLogo("../resources/images/logo-265x59.png");
    ui->navigationMenuLogo->setPixmap(navigationMenuLogo);

    QPixmap allIcons("../resources/images/all-icons.png");
    ui->allIcons->setPixmap(allIcons);

    QPixmap dogDescHeaderInfo("../resources/images/dog-desc-header.png");
    ui->dogHeaderImageInfo->setPixmap(dogDescHeaderInfo);

    QPixmap pawIconOnTheEdge("../resources/images/background-particle-132x141.png");
    ui->pawIconOnTheEdge->setPixmap(pawIconOnTheEdge);
    ui->pawIconOnTheEdge_2->setPixmap(pawIconOnTheEdge);

    QPixmap exitButtonImage("../resources/images/exit.png");
    ui->exitButton->setPixmap(exitButtonImage);

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

bool MainWindow::eventFilter(QObject* obj, QEvent* event) {
    if (obj == ui->exitButton) {
        if (event->type() == QEvent::MouseButtonPress) {
            QMouseEvent* mouseEvent = dynamic_cast<QMouseEvent*>(event);
            if (mouseEvent && mouseEvent->button() == Qt::LeftButton) {
                close();
                return true;
            }
        }
    }
    return QObject::eventFilter(obj, event);
}
