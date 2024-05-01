/********************************************************************************
** Form generated from reading UI file 'doginfodialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOGINFODIALOG_H
#define UI_DOGINFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DogInfoDialog
{
public:
    QLabel *exitButton;
    QLabel *nameLabel;
    QLabel *raceLabel;
    QLabel *birthDateLabel;
    QLabel *ageLabel_2;
    QLabel *ageLabel_3;
    QLabel *ageLabel_4;
    QLabel *weightLabel;
    QLabel *heightLabel;
    QLabel *ageLabel_5;
    QLabel *lastVetVisitDateLabelL;
    QLabel *ageLabel_6;

    void setupUi(QWidget *DogInfoDialog)
    {
        if (DogInfoDialog->objectName().isEmpty())
            DogInfoDialog->setObjectName("DogInfoDialog");
        DogInfoDialog->resize(368, 249);
        DogInfoDialog->setStyleSheet(QString::fromUtf8("background-color: #E9E4D4;  "));
        exitButton = new QLabel(DogInfoDialog);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(310, 10, 51, 41));
        exitButton->setCursor(QCursor(Qt::PointingHandCursor));
        exitButton->setStyleSheet(QString::fromUtf8("background-color:  transparent;"));
        exitButton->setAlignment(Qt::AlignCenter);
        nameLabel = new QLabel(DogInfoDialog);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setGeometry(QRect(100, 10, 151, 51));
        nameLabel->setStyleSheet(QString::fromUtf8("color: #017F36;\n"
"font-weight:bold;\n"
"font-family: Montserrat; \n"
"font-size: 20px;"));
        nameLabel->setAlignment(Qt::AlignCenter);
        raceLabel = new QLabel(DogInfoDialog);
        raceLabel->setObjectName("raceLabel");
        raceLabel->setGeometry(QRect(140, 80, 181, 31));
        raceLabel->setStyleSheet(QString::fromUtf8("color: #444;\n"
"font-weight:400;\n"
"font-family: Montserrat; "));
        birthDateLabel = new QLabel(DogInfoDialog);
        birthDateLabel->setObjectName("birthDateLabel");
        birthDateLabel->setGeometry(QRect(140, 105, 181, 21));
        birthDateLabel->setStyleSheet(QString::fromUtf8("color: #444;\n"
"font-weight:400;\n"
"font-family: Montserrat; "));
        ageLabel_2 = new QLabel(DogInfoDialog);
        ageLabel_2->setObjectName("ageLabel_2");
        ageLabel_2->setGeometry(QRect(30, 80, 41, 31));
        ageLabel_2->setStyleSheet(QString::fromUtf8("color: #444;\n"
"font-weight:bold;\n"
"font-family: Montserrat; "));
        ageLabel_3 = new QLabel(DogInfoDialog);
        ageLabel_3->setObjectName("ageLabel_3");
        ageLabel_3->setGeometry(QRect(30, 100, 101, 31));
        ageLabel_3->setStyleSheet(QString::fromUtf8("color: #444;\n"
"font-weight:bold;\n"
"font-family: Montserrat; "));
        ageLabel_4 = new QLabel(DogInfoDialog);
        ageLabel_4->setObjectName("ageLabel_4");
        ageLabel_4->setGeometry(QRect(30, 125, 101, 31));
        ageLabel_4->setStyleSheet(QString::fromUtf8("color: #444;\n"
"font-weight:bold;\n"
"font-family: Montserrat; "));
        weightLabel = new QLabel(DogInfoDialog);
        weightLabel->setObjectName("weightLabel");
        weightLabel->setGeometry(QRect(140, 130, 181, 21));
        weightLabel->setStyleSheet(QString::fromUtf8("color: #444;\n"
"font-weight:400;\n"
"font-family: Montserrat; "));
        heightLabel = new QLabel(DogInfoDialog);
        heightLabel->setObjectName("heightLabel");
        heightLabel->setGeometry(QRect(140, 155, 181, 21));
        heightLabel->setStyleSheet(QString::fromUtf8("color: #444;\n"
"font-weight:400;\n"
"font-family: Montserrat; "));
        ageLabel_5 = new QLabel(DogInfoDialog);
        ageLabel_5->setObjectName("ageLabel_5");
        ageLabel_5->setGeometry(QRect(30, 150, 101, 31));
        ageLabel_5->setStyleSheet(QString::fromUtf8("color: #444;\n"
"font-weight:bold;\n"
"font-family: Montserrat; "));
        lastVetVisitDateLabelL = new QLabel(DogInfoDialog);
        lastVetVisitDateLabelL->setObjectName("lastVetVisitDateLabelL");
        lastVetVisitDateLabelL->setGeometry(QRect(200, 175, 121, 21));
        lastVetVisitDateLabelL->setStyleSheet(QString::fromUtf8("color: #444;\n"
"font-weight:400;\n"
"font-family: Montserrat; "));
        ageLabel_6 = new QLabel(DogInfoDialog);
        ageLabel_6->setObjectName("ageLabel_6");
        ageLabel_6->setGeometry(QRect(30, 170, 171, 31));
        ageLabel_6->setStyleSheet(QString::fromUtf8("color: #444;\n"
"font-weight:bold;\n"
"font-family: Montserrat; "));

        retranslateUi(DogInfoDialog);

        QMetaObject::connectSlotsByName(DogInfoDialog);
    } // setupUi

    void retranslateUi(QWidget *DogInfoDialog)
    {
        DogInfoDialog->setWindowTitle(QCoreApplication::translate("DogInfoDialog", "Form", nullptr));
        exitButton->setText(QString());
        nameLabel->setText(QCoreApplication::translate("DogInfoDialog", "Rio", nullptr));
        raceLabel->setText(QCoreApplication::translate("DogInfoDialog", "German Shepherd", nullptr));
        birthDateLabel->setText(QCoreApplication::translate("DogInfoDialog", "2018-04-19", nullptr));
        ageLabel_2->setText(QCoreApplication::translate("DogInfoDialog", "Rasa:", nullptr));
        ageLabel_3->setText(QCoreApplication::translate("DogInfoDialog", "Datum ro\304\221enja:", nullptr));
        ageLabel_4->setText(QCoreApplication::translate("DogInfoDialog", "Te\305\276ina", nullptr));
        weightLabel->setText(QCoreApplication::translate("DogInfoDialog", "35kg", nullptr));
        heightLabel->setText(QCoreApplication::translate("DogInfoDialog", "30cm", nullptr));
        ageLabel_5->setText(QCoreApplication::translate("DogInfoDialog", "Visina", nullptr));
        lastVetVisitDateLabelL->setText(QCoreApplication::translate("DogInfoDialog", "2023-05-14", nullptr));
        ageLabel_6->setText(QCoreApplication::translate("DogInfoDialog", "Zadnja posjeta veterinaru:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DogInfoDialog: public Ui_DogInfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOGINFODIALOG_H
