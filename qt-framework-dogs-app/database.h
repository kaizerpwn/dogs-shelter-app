#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql>
#include <QSqlDatabase>

class DatabaseManager {
public:
    static QSqlDatabase& getDatabaseInstance() {
        static QSqlDatabase db = initializeDatabase();
        return db;
    }

    static void closeDatabaseInstance() {
        QSqlDatabase db = getDatabaseInstance();
        db.close();
    }

    static void deleteDatabaseInstance() {
        closeDatabaseInstance();
        QSqlDatabase::removeDatabase(QSqlDatabase::defaultConnection);
    }

    static QSqlDatabase initializeDatabase() {
        QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("127.0.0.1");
        db.setUserName("root");
        db.setPassword("rootroot");
        db.setDatabaseName("dogs_shelter");

        if (db.open()) {
            qDebug() << "[DOGS-SHELTER]: Connected to database.";
        } else {
            qDebug() << "[DOGS-SHELTER]: Failed to connect to database.";
        }
        return db;
    }
};

#endif
