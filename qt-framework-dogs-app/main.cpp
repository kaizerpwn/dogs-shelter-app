#include "mainwindow.h"

#include <QApplication>
#include <QWidget>
#include <QScreen>

#include "database.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DatabaseManager::initializeDatabase();
    MainWindow w;
    w.show();
    return a.exec();
}
