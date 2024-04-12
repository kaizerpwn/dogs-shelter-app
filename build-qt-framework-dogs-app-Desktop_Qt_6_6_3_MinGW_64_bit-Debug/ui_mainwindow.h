/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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

class Ui_MainWindow
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
    QFrame *headerFrame;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *allIcons;
    QPushButton *pushButton_2;
    QLabel *pawIconOnTheEdge;
    QLabel *rightArrowIcon;
    QLabel *dogHeaderImage;
    QLabel *dogHeaderImageInfo;
    QLabel *pawIconOnTheEdge_2;
    QLabel *exitButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1366, 768);
        MainWindow->setMaximumSize(QSize(1366, 768));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../resources/images/logo-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #F8F3E0;\n"
"border-radius: 10px;"));
        centralwidget = new QWidget(MainWindow);
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

        headerFrame = new QFrame(centralwidget);
        headerFrame->setObjectName("headerFrame");
        headerFrame->setGeometry(QRect(517, 173, 814, 502));
        headerFrame->setStyleSheet(QString::fromUtf8("background-color:  #E9E4D4;\n"
"border-radius: 20px;"));
        headerFrame->setFrameShape(QFrame::StyledPanel);
        headerFrame->setFrameShadow(QFrame::Raised);
        label = new QLabel(headerFrame);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 50, 621, 61));
        label->setStyleSheet(QString::fromUtf8("color: #017F36;\n"
"font-size: 40px;\n"
"font-weight:  bold;\n"
"font-family: Montserrat;"));
        label_2 = new QLabel(headerFrame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(63, 103, 451, 31));
        label_2->setStyleSheet(QString::fromUtf8("color: #444;\n"
"font-size: 24px;\n"
"font-weight:  300;\n"
"font-family: Montserrat;"));
        label_3 = new QLabel(headerFrame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(63, 150, 691, 61));
        label_3->setStyleSheet(QString::fromUtf8("color: #444;\n"
"font-size: 16px;\n"
"font-weight:  300;\n"
"font-family: Montserrat; "));
        allIcons = new QLabel(headerFrame);
        allIcons->setObjectName("allIcons");
        allIcons->setGeometry(QRect(70, 280, 415, 94));
        pushButton_2 = new QPushButton(headerFrame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(520, 410, 252, 59));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: #017F36; \n"
"height: 120px;\n"
"font-weight:  600;\n"
"font-family: Montserrat;\n"
"font-size: 20px;\n"
"color: #fff; \n"
""));
        pawIconOnTheEdge = new QLabel(headerFrame);
        pawIconOnTheEdge->setObjectName("pawIconOnTheEdge");
        pawIconOnTheEdge->setGeometry(QRect(680, 10, 132, 141));
        pawIconOnTheEdge->setStyleSheet(QString::fromUtf8("opacity: 20%;"));
        rightArrowIcon = new QLabel(headerFrame);
        rightArrowIcon->setObjectName("rightArrowIcon");
        rightArrowIcon->setGeometry(QRect(730, 426, 30, 30));
        rightArrowIcon->setCursor(QCursor(Qt::PointingHandCursor));
        rightArrowIcon->setStyleSheet(QString::fromUtf8("opacity: 20%;\n"
"background-color: transparent;"));
        dogHeaderImage = new QLabel(centralwidget);
        dogHeaderImage->setObjectName("dogHeaderImage");
        dogHeaderImage->setGeometry(QRect(38, 170, 457, 643));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dogHeaderImage->sizePolicy().hasHeightForWidth());
        dogHeaderImage->setSizePolicy(sizePolicy1);
        dogHeaderImage->setMinimumSize(QSize(457, 0));
        dogHeaderImageInfo = new QLabel(centralwidget);
        dogHeaderImageInfo->setObjectName("dogHeaderImageInfo");
        dogHeaderImageInfo->setGeometry(QRect(280, 510, 194, 68));
        dogHeaderImageInfo->setAutoFillBackground(false);
        dogHeaderImageInfo->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        pawIconOnTheEdge_2 = new QLabel(centralwidget);
        pawIconOnTheEdge_2->setObjectName("pawIconOnTheEdge_2");
        pawIconOnTheEdge_2->setGeometry(QRect(-10, 680, 132, 141));
        pawIconOnTheEdge_2->setStyleSheet(QString::fromUtf8("opacity: 20%;\n"
"background-color: transparent;"));
        exitButton = new QLabel(centralwidget);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(1310, 20, 51, 41));
        exitButton->setCursor(QCursor(Qt::PointingHandCursor));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Dogs Shelter", nullptr));
        navigationMenuLogo->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Doniraj", nullptr));
        homeLabelButton->setText(QCoreApplication::translate("MainWindow", "Po\304\215etna", nullptr));
        aboutUsLabelButton->setText(QCoreApplication::translate("MainWindow", "O nama", nullptr));
        contactUsLabelButton->setText(QCoreApplication::translate("MainWindow", "Kontakt", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Pru\305\276ite \305\241apici siguran dom.", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Va\305\241a digitalna podr\305\241ka u azilu za pse!", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Na\305\241a aplikacija 'Dogs Shelter' olak\305\241ava korisnicima pronala\305\276enje, povezivanje i\n"
"udomljavanje pasa, otvaraju\304\207i vrata sre\304\207e i novih po\304\215etaka za svakog \304\215etverono\305\276nog\n"
"prijatelja.", nullptr));
        allIcons->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Pogledaj pse", nullptr));
        pawIconOnTheEdge->setText(QString());
        rightArrowIcon->setText(QString());
        dogHeaderImage->setText(QString());
        dogHeaderImageInfo->setText(QString());
        pawIconOnTheEdge_2->setText(QString());
        exitButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
