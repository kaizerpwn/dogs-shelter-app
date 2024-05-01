/********************************************************************************
** Form generated from reading UI file 'dogslist.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOGSLIST_H
#define UI_DOGSLIST_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
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
    QLabel *dogsListHeaderTitle;
    QLabel *dogsListHeaderDescription;
    QPushButton *exportButton;

    void setupUi(QMainWindow *DogsList)
    {
        if (DogsList->objectName().isEmpty())
            DogsList->setObjectName("DogsList");
        DogsList->resize(1366, 768);
        DogsList->setMaximumSize(QSize(1366, 768));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../resources/images/logo-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        DogsList->setWindowIcon(icon);
        DogsList->setStyleSheet(QString::fromUtf8("background-color: #F8F3E0; "));
        centralwidget = new QWidget(DogsList);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("border-radius: 20px;"));
        navigationFrame = new QFrame(centralwidget);
        navigationFrame->setObjectName("navigationFrame");
        navigationFrame->setGeometry(QRect(61, 34, 1158, 80));
        navigationFrame->setStyleSheet(QString::fromUtf8("background-color:  #E9E4D4;\n"
"border-radius: 20px;"));
        navigationFrame->setFrameShape(QFrame::StyledPanel);
        navigationFrame->setFrameShadow(QFrame::Raised);
        navigationMenuLogo = new QLabel(navigationFrame);
        navigationMenuLogo->setObjectName("navigationMenuLogo");
        navigationMenuLogo->setGeometry(QRect(20, 15, 291, 61));
        navigationMenuLogo->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton = new QPushButton(navigationFrame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(960, 18, 150, 45));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
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
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(450, 20, 341, 37));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 7, 0, 0);
        homeLabelButton = new QLabel(layoutWidget);
        homeLabelButton->setObjectName("homeLabelButton");
        homeLabelButton->setCursor(QCursor(Qt::PointingHandCursor));
        homeLabelButton->setStyleSheet(QString::fromUtf8("color: #017F36;\n"
"font-size: 22px;\n"
"font-family: Montserrat;"));

        horizontalLayout->addWidget(homeLabelButton);

        aboutUsLabelButton = new QLabel(layoutWidget);
        aboutUsLabelButton->setObjectName("aboutUsLabelButton");
        aboutUsLabelButton->setCursor(QCursor(Qt::PointingHandCursor));
        aboutUsLabelButton->setStyleSheet(QString::fromUtf8("color: #017F36;\n"
"font-size: 22px;\n"
"font-family: Montserrat;"));

        horizontalLayout->addWidget(aboutUsLabelButton);

        contactUsLabelButton = new QLabel(layoutWidget);
        contactUsLabelButton->setObjectName("contactUsLabelButton");
        contactUsLabelButton->setCursor(QCursor(Qt::PointingHandCursor));
        contactUsLabelButton->setStyleSheet(QString::fromUtf8("color: #017F36;\n"
"font-size: 22px;\n"
"font-family: Montserrat;"));

        horizontalLayout->addWidget(contactUsLabelButton);

        pawIconOnTheEdge_2 = new QLabel(centralwidget);
        pawIconOnTheEdge_2->setObjectName("pawIconOnTheEdge_2");
        pawIconOnTheEdge_2->setGeometry(QRect(-10, 680, 132, 141));
        pawIconOnTheEdge_2->setStyleSheet(QString::fromUtf8("opacity: 20%;\n"
"background-color: transparent;"));
        exitButton = new QLabel(centralwidget);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(1310, 20, 51, 41));
        exitButton->setCursor(QCursor(Qt::PointingHandCursor));
        dogsListHeaderTitle = new QLabel(centralwidget);
        dogsListHeaderTitle->setObjectName("dogsListHeaderTitle");
        dogsListHeaderTitle->setGeometry(QRect(65, 160, 231, 31));
        dogsListHeaderTitle->setStyleSheet(QString::fromUtf8("color: #444;\n"
"font-weight:bold;\n"
"font-family: Montserrat;\n"
"font-size: 32px;"));
        dogsListHeaderDescription = new QLabel(centralwidget);
        dogsListHeaderDescription->setObjectName("dogsListHeaderDescription");
        dogsListHeaderDescription->setGeometry(QRect(67, 194, 521, 21));
        dogsListHeaderDescription->setStyleSheet(QString::fromUtf8("color: #444;\n"
"font-weight:300;\n"
"font-family: Montserrat;\n"
"font-size: 16px;"));
        exportButton = new QPushButton(centralwidget);
        exportButton->setObjectName("exportButton");
        exportButton->setGeometry(QRect(1160, 170, 150, 45));
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
        dogsListHeaderTitle->setText(QCoreApplication::translate("DogsList", "Dostupni psi", nullptr));
        dogsListHeaderDescription->setText(QCoreApplication::translate("DogsList", "Ovdje mo\305\276ete prona\304\207i listu svih pasa spremnih za udomljavanje.", nullptr));
        exportButton->setText(QCoreApplication::translate("DogsList", "Export", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DogsList: public Ui_DogsList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOGSLIST_H
