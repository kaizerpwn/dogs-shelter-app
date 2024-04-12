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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
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
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QFrame *dogOneFrame;
    QFrame *frame_5;
    QLabel *dogsAge_7;
    QLabel *moreInfoIcon_4;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *dogsName_4;
    QLabel *dogsAge_8;
    QLabel *dogImage_4;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *DogsList)
    {
        if (DogsList->objectName().isEmpty())
            DogsList->setObjectName("DogsList");
        DogsList->resize(1366, 768);
        DogsList->setMaximumSize(QSize(1366, 768));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../resources/images/logo-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        DogsList->setWindowIcon(icon);
        DogsList->setStyleSheet(QString::fromUtf8("background-color: #F8F3E0;"));
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
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(70, 240, 1241, 521));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        dogOneFrame = new QFrame(layoutWidget1);
        dogOneFrame->setObjectName("dogOneFrame");
        dogOneFrame->setMinimumSize(QSize(291, 281));
        dogOneFrame->setMaximumSize(QSize(291, 281));
        dogOneFrame->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 20px;"));
        dogOneFrame->setFrameShape(QFrame::StyledPanel);
        dogOneFrame->setFrameShadow(QFrame::Raised);
        frame_5 = new QFrame(dogOneFrame);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(0, 210, 291, 72));
        frame_5->setStyleSheet(QString::fromUtf8("background-color: rgba(233,228,212, 0.9); \n"
"border-top-left-radius: 0px !important;\n"
"border-top-right-radius: 0px !important;\n"
"border-bottom-left-radius: 20px !Important; \n"
"border-bottom-right-radius: 20px !Important; "));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        dogsAge_7 = new QLabel(frame_5);
        dogsAge_7->setObjectName("dogsAge_7");
        dogsAge_7->setGeometry(QRect(30, 40, 191, 16));
        dogsAge_7->setStyleSheet(QString::fromUtf8("font-size: 14px;\n"
"color: #444; \n"
"background-color: transparent;"));
        moreInfoIcon_4 = new QLabel(frame_5);
        moreInfoIcon_4->setObjectName("moreInfoIcon_4");
        moreInfoIcon_4->setGeometry(QRect(235, 11, 50, 50));
        moreInfoIcon_4->setCursor(QCursor(Qt::PointingHandCursor));
        moreInfoIcon_4->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        layoutWidget_4 = new QWidget(frame_5);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(20, 10, 165, 32));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(9, 0, 0, 0);
        dogsName_4 = new QLabel(layoutWidget_4);
        dogsName_4->setObjectName("dogsName_4");
        dogsName_4->setStyleSheet(QString::fromUtf8("font-size: 22px;\n"
"color: #017F36;\n"
"font-weight: bold;\n"
"background-color: transparent;"));

        horizontalLayout_5->addWidget(dogsName_4);

        dogsAge_8 = new QLabel(layoutWidget_4);
        dogsAge_8->setObjectName("dogsAge_8");
        dogsAge_8->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color: #444; \n"
"background-color: transparent;"));

        horizontalLayout_5->addWidget(dogsAge_8);

        dogImage_4 = new QLabel(dogOneFrame);
        dogImage_4->setObjectName("dogImage_4");
        dogImage_4->setGeometry(QRect(20, 0, 251, 281));
        sizePolicy.setHeightForWidth(dogImage_4->sizePolicy().hasHeightForWidth());
        dogImage_4->setSizePolicy(sizePolicy);
        dogImage_4->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        dogImage_4->setAlignment(Qt::AlignCenter);
        dogImage_4->setMargin(0);
        dogImage_4->setIndent(-1);
        dogImage_4->raise();
        frame_5->raise();

        gridLayout->addWidget(dogOneFrame, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

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
        dogsAge_7->setText(QCoreApplication::translate("DogsList", "Obu\304\215en, voli da se igra", nullptr));
        moreInfoIcon_4->setText(QString());
        dogsName_4->setText(QCoreApplication::translate("DogsList", "Pujdo", nullptr));
        dogsAge_8->setText(QCoreApplication::translate("DogsList", ", 8 mjeseci", nullptr));
        dogImage_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DogsList: public Ui_DogsList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOGSLIST_H
