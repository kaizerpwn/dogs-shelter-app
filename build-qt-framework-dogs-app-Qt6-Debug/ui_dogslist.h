/********************************************************************************
** Form generated from reading UI file 'dogslist.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOGSLIST_H
#define UI_DOGSLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DogsList
{
public:
    QWidget *centralwidget;
    QFrame *navigationFrame;
    QLabel *navigationMenuLogo;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *homeLabelButton;
    QLabel *aboutUsLabelButton;
    QLabel *contactUsLabelButton;
    QLabel *pawIconOnTheEdge_2;
    QLabel *exitButton;
    QLabel *label;
    QLabel *label_2;
    QPushButton *exportButton;

    void setupUi(QMainWindow *DogsList)
    {
        if (DogsList->objectName().isEmpty())
            DogsList->setObjectName(QString::fromUtf8("DogsList"));
        DogsList->resize(1366, 768);
        DogsList->setStyleSheet(QString::fromUtf8("background-color: #F8F3E0;"));
        centralwidget = new QWidget(DogsList);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("border-radius: 20px;"));
        navigationFrame = new QFrame(centralwidget);
        navigationFrame->setObjectName(QString::fromUtf8("navigationFrame"));
        navigationFrame->setGeometry(QRect(61, 34, 1158, 80));
        navigationFrame->setStyleSheet(QString::fromUtf8("background-color:  #E9E4D4;\n"
"border-radius: 20px;"));
        navigationFrame->setFrameShape(QFrame::StyledPanel);
        navigationFrame->setFrameShadow(QFrame::Raised);
        navigationMenuLogo = new QLabel(navigationFrame);
        navigationMenuLogo->setObjectName(QString::fromUtf8("navigationMenuLogo"));
        navigationMenuLogo->setGeometry(QRect(20, 15, 291, 61));
        pushButton = new QPushButton(navigationFrame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(960, 18, 150, 45));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #017F36; \n"
"height: 120px;\n"
"font-weight:  600;\n"
"font-family: Montserrat;\n"
"font-size: 20px;\n"
"color: #fff;"));
        layoutWidget = new QWidget(navigationFrame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(450, 20, 341, 37));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 7, 0, 0);
        homeLabelButton = new QLabel(layoutWidget);
        homeLabelButton->setObjectName(QString::fromUtf8("homeLabelButton"));
        homeLabelButton->setCursor(QCursor(Qt::PointingHandCursor));
        homeLabelButton->setStyleSheet(QString::fromUtf8("color: #017F36;\n"
"font-size: 22px;\n"
"font-family: Montserrat;"));

        horizontalLayout->addWidget(homeLabelButton);

        aboutUsLabelButton = new QLabel(layoutWidget);
        aboutUsLabelButton->setObjectName(QString::fromUtf8("aboutUsLabelButton"));
        aboutUsLabelButton->setCursor(QCursor(Qt::PointingHandCursor));
        aboutUsLabelButton->setStyleSheet(QString::fromUtf8("color: #017F36;\n"
"font-size: 22px;\n"
"font-family: Montserrat;"));

        horizontalLayout->addWidget(aboutUsLabelButton);

        contactUsLabelButton = new QLabel(layoutWidget);
        contactUsLabelButton->setObjectName(QString::fromUtf8("contactUsLabelButton"));
        contactUsLabelButton->setCursor(QCursor(Qt::PointingHandCursor));
        contactUsLabelButton->setStyleSheet(QString::fromUtf8("color: #017F36;\n"
"font-size: 22px;\n"
"font-family: Montserrat;"));

        horizontalLayout->addWidget(contactUsLabelButton);

        pawIconOnTheEdge_2 = new QLabel(centralwidget);
        pawIconOnTheEdge_2->setObjectName(QString::fromUtf8("pawIconOnTheEdge_2"));
        pawIconOnTheEdge_2->setGeometry(QRect(-10, 680, 132, 141));
        pawIconOnTheEdge_2->setStyleSheet(QString::fromUtf8("opacity: 20%;\n"
"background-color: transparent;"));
        exitButton = new QLabel(centralwidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(1310, 20, 51, 41));
        exitButton->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(65, 160, 231, 31));
        label->setStyleSheet(QString::fromUtf8("color: #444;\n"
"font-weight:bold;\n"
"font-family: Montserrat;\n"
"font-size: 32px;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(67, 194, 521, 21));
        label_2->setStyleSheet(QString::fromUtf8("color: #444;\n"
"font-weight:200;\n"
"font-family: Montserrat;\n"
"font-size: 16px;"));
        exportButton = new QPushButton(centralwidget);
        exportButton->setObjectName(QString::fromUtf8("exportButton"));
        exportButton->setGeometry(QRect(1067, 170, 150, 45));
        sizePolicy.setHeightForWidth(exportButton->sizePolicy().hasHeightForWidth());
        exportButton->setSizePolicy(sizePolicy);
        exportButton->setCursor(QCursor(Qt::PointingHandCursor));
        exportButton->setStyleSheet(QString::fromUtf8("background-color: #017F36; \n"
"height: 120px;\n"
"font-weight:  bold;\n"
"font-family: Montserrat;\n"
"font-size: 20px;\n"
"color: #fff;"));
        DogsList->setCentralWidget(centralwidget);

        retranslateUi(DogsList);

        QMetaObject::connectSlotsByName(DogsList);
    } // setupUi

    void retranslateUi(QMainWindow *DogsList)
    {
        DogsList->setWindowTitle(QCoreApplication::translate("DogsList", "Dogs Shelter", nullptr));
        navigationMenuLogo->setText(QString());
        pushButton->setText(QCoreApplication::translate("DogsList", "Doniraj", nullptr));
        homeLabelButton->setText(QCoreApplication::translate("DogsList", "Po\304\215etna", nullptr));
        aboutUsLabelButton->setText(QCoreApplication::translate("DogsList", "O nama", nullptr));
        contactUsLabelButton->setText(QCoreApplication::translate("DogsList", "Kontakt", nullptr));
        pawIconOnTheEdge_2->setText(QString());
        exitButton->setText(QString());
        label->setText(QCoreApplication::translate("DogsList", "Dostupni psi", nullptr));
        label_2->setText(QCoreApplication::translate("DogsList", "Ovdje mo\305\276ete prona\304\207i listu svih pasa spremnih za udomljavanje.", nullptr));
        exportButton->setText(QCoreApplication::translate("DogsList", "Export", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DogsList: public Ui_DogsList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOGSLIST_H
