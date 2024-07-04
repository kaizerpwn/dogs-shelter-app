/********************************************************************************
** Form generated from reading UI file 'viewdogwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWDOGWINDOW_H
#define UI_VIEWDOGWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewDogWindow
{
public:
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
    QFrame *frame;
    QLabel *dogsImage;
    QFrame *frame_2;
    QLabel *dogsName;
    QLabel *dogsShortDescription;
    QFrame *frame_3;
    QLabel *backToTheDogsListButton;
    QLabel *infoDogsImage;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *deleteDogButton;
    QLabel *editDogButton_1;
    QLabel *editDogButton_2;
    QLabel *editDogButton_3;
    QLabel *editDogButton_4;
    QLabel *editDogButton_5;
    QTextEdit *birthDateLabel;
    QTextEdit *weightLabel;
    QTextEdit *heightLabel;
    QTextEdit *vaccineNumberLabel;
    QTextEdit *lastVetVisitLabel;
    QLabel *cancelEditButton_1;
    QLabel *cancelEditButton_2;
    QLabel *cancelEditButton_3;
    QLabel *cancelEditButton_4;
    QLabel *cancelEditButton_5;

    void setupUi(QWidget *ViewDogWindow)
    {
        if (ViewDogWindow->objectName().isEmpty())
            ViewDogWindow->setObjectName("ViewDogWindow");
        ViewDogWindow->resize(1366, 768);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../resources/images/logo-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        ViewDogWindow->setWindowIcon(icon);
        ViewDogWindow->setStyleSheet(QString::fromUtf8("background-color: #F8F3E0; "));
        navigationFrame = new QFrame(ViewDogWindow);
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

        pawIconOnTheEdge_2 = new QLabel(ViewDogWindow);
        pawIconOnTheEdge_2->setObjectName("pawIconOnTheEdge_2");
        pawIconOnTheEdge_2->setGeometry(QRect(-10, 680, 132, 141));
        pawIconOnTheEdge_2->setStyleSheet(QString::fromUtf8("opacity: 20%;\n"
"background-color: transparent;"));
        exitButton = new QLabel(ViewDogWindow);
        exitButton->setObjectName("exitButton");
        exitButton->setGeometry(QRect(1310, 20, 51, 41));
        exitButton->setCursor(QCursor(Qt::PointingHandCursor));
        frame = new QFrame(ViewDogWindow);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(70, 150, 412, 542));
        frame->setStyleSheet(QString::fromUtf8("background-color: #D9D9D9;\n"
"border-radius: 20px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        dogsImage = new QLabel(frame);
        dogsImage->setObjectName("dogsImage");
        dogsImage->setGeometry(QRect(20, 30, 361, 511));
        dogsImage->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
""));
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(-1, 452, 415, 91));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgba(233,228,212, 0.9); border-top-left-radius: 0px !important; border-top-right-radius: 0px !important; border-bottom-left-radius: 20px !important; border-bottom-right-radius: 20px !important;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        dogsName = new QLabel(frame_2);
        dogsName->setObjectName("dogsName");
        dogsName->setGeometry(QRect(40, 10, 221, 31));
        dogsName->setStyleSheet(QString::fromUtf8("color: #017F36;\n"
"font-family: Montserrat;\n"
"font-weight: bold;\n"
"font-size: 26px;"));
        dogsShortDescription = new QLabel(frame_2);
        dogsShortDescription->setObjectName("dogsShortDescription");
        dogsShortDescription->setGeometry(QRect(40, 40, 221, 31));
        dogsShortDescription->setStyleSheet(QString::fromUtf8("color: #444;\n"
"font-family: Montserrat;\n"
"font-weight: 400;\n"
"font-size: 18px;"));
        frame_3 = new QFrame(ViewDogWindow);
        frame_3->setObjectName("frame_3");
        frame_3->setGeometry(QRect(520, 150, 811, 541));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: #E9E4D4;\n"
"border-radius: 20px;"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        backToTheDogsListButton = new QLabel(frame_3);
        backToTheDogsListButton->setObjectName("backToTheDogsListButton");
        backToTheDogsListButton->setGeometry(QRect(740, 17, 51, 51));
        backToTheDogsListButton->setCursor(QCursor(Qt::OpenHandCursor));
        backToTheDogsListButton->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
""));
        infoDogsImage = new QLabel(frame_3);
        infoDogsImage->setObjectName("infoDogsImage");
        infoDogsImage->setGeometry(QRect(60, 50, 319, 56));
        infoDogsImage->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
""));
        label = new QLabel(frame_3);
        label->setObjectName("label");
        label->setGeometry(QRect(65, 145, 231, 31));
        label->setStyleSheet(QString::fromUtf8("color: #444;\n"
"font-family: Montserrat;\n"
"font-weight: bold;\n"
"font-size: 26px;"));
        label_2 = new QLabel(frame_3);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(65, 182, 231, 21));
        label_2->setStyleSheet(QString::fromUtf8("color: #444;\n"
"font-family: Montserrat;\n"
"font-weight: bold;\n"
"font-size: 26px;"));
        label_3 = new QLabel(frame_3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(65, 212, 231, 21));
        label_3->setStyleSheet(QString::fromUtf8("color: #444;\n"
"font-family: Montserrat;\n"
"font-weight: bold;\n"
"font-size: 26px;"));
        label_4 = new QLabel(frame_3);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(65, 235, 231, 32));
        label_4->setStyleSheet(QString::fromUtf8("color: #444;\n"
"font-family: Montserrat;\n"
"font-weight: bold;\n"
"font-size: 26px;"));
        label_5 = new QLabel(frame_3);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(65, 265, 361, 32));
        label_5->setStyleSheet(QString::fromUtf8("color: #444;\n"
"font-family: Montserrat;\n"
"font-weight: bold;\n"
"font-size: 26px;"));
        deleteDogButton = new QLabel(frame_3);
        deleteDogButton->setObjectName("deleteDogButton");
        deleteDogButton->setGeometry(QRect(60, 320, 190, 58));
        deleteDogButton->setCursor(QCursor(Qt::OpenHandCursor));
        editDogButton_1 = new QLabel(frame_3);
        editDogButton_1->setObjectName("editDogButton_1");
        editDogButton_1->setGeometry(QRect(477, 150, 23, 21));
        editDogButton_1->setCursor(QCursor(Qt::PointingHandCursor));
        editDogButton_1->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
""));
        editDogButton_2 = new QLabel(frame_3);
        editDogButton_2->setObjectName("editDogButton_2");
        editDogButton_2->setGeometry(QRect(400, 183, 23, 21));
        editDogButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        editDogButton_2->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
""));
        editDogButton_3 = new QLabel(frame_3);
        editDogButton_3->setObjectName("editDogButton_3");
        editDogButton_3->setGeometry(QRect(408, 215, 23, 21));
        editDogButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        editDogButton_3->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
""));
        editDogButton_4 = new QLabel(frame_3);
        editDogButton_4->setObjectName("editDogButton_4");
        editDogButton_4->setGeometry(QRect(350, 243, 23, 21));
        editDogButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        editDogButton_4->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
""));
        editDogButton_5 = new QLabel(frame_3);
        editDogButton_5->setObjectName("editDogButton_5");
        editDogButton_5->setGeometry(QRect(596, 270, 23, 21));
        editDogButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        editDogButton_5->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
""));
        birthDateLabel = new QTextEdit(frame_3);
        birthDateLabel->setObjectName("birthDateLabel");
        birthDateLabel->setGeometry(QRect(320, 145, 161, 31));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(birthDateLabel->sizePolicy().hasHeightForWidth());
        birthDateLabel->setSizePolicy(sizePolicy1);
        birthDateLabel->setMinimumSize(QSize(31, 0));
        birthDateLabel->setMaximumSize(QSize(161, 31));
        birthDateLabel->setStyleSheet(QString::fromUtf8("color: #444;\n"
"font-family: Montserrat;\n"
"font-weight: 400;\n"
"font-size: 26px;"));
        birthDateLabel->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        birthDateLabel->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        birthDateLabel->setLineWrapMode(QTextEdit::NoWrap);
        weightLabel = new QTextEdit(frame_3);
        weightLabel->setObjectName("weightLabel");
        weightLabel->setGeometry(QRect(320, 178, 91, 31));
        sizePolicy1.setHeightForWidth(weightLabel->sizePolicy().hasHeightForWidth());
        weightLabel->setSizePolicy(sizePolicy1);
        weightLabel->setMinimumSize(QSize(31, 0));
        weightLabel->setMaximumSize(QSize(161, 31));
        weightLabel->setStyleSheet(QString::fromUtf8("color: #444;\n"
"font-family: Montserrat;\n"
"font-weight: 400;\n"
"font-size: 26px;"));
        weightLabel->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        weightLabel->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        weightLabel->setLineWrapMode(QTextEdit::NoWrap);
        heightLabel = new QTextEdit(frame_3);
        heightLabel->setObjectName("heightLabel");
        heightLabel->setGeometry(QRect(320, 210, 91, 31));
        sizePolicy1.setHeightForWidth(heightLabel->sizePolicy().hasHeightForWidth());
        heightLabel->setSizePolicy(sizePolicy1);
        heightLabel->setMinimumSize(QSize(31, 0));
        heightLabel->setMaximumSize(QSize(161, 31));
        heightLabel->setStyleSheet(QString::fromUtf8("color: #444;\n"
"font-family: Montserrat;\n"
"font-weight: 400;\n"
"font-size: 26px;"));
        heightLabel->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        heightLabel->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        heightLabel->setLineWrapMode(QTextEdit::NoWrap);
        vaccineNumberLabel = new QTextEdit(frame_3);
        vaccineNumberLabel->setObjectName("vaccineNumberLabel");
        vaccineNumberLabel->setGeometry(QRect(320, 240, 41, 31));
        sizePolicy1.setHeightForWidth(vaccineNumberLabel->sizePolicy().hasHeightForWidth());
        vaccineNumberLabel->setSizePolicy(sizePolicy1);
        vaccineNumberLabel->setMinimumSize(QSize(31, 0));
        vaccineNumberLabel->setMaximumSize(QSize(161, 31));
        vaccineNumberLabel->setStyleSheet(QString::fromUtf8("color: #444;\n"
"font-family: Montserrat;\n"
"font-weight: 400;\n"
"font-size: 26px;"));
        vaccineNumberLabel->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        vaccineNumberLabel->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        vaccineNumberLabel->setLineWrapMode(QTextEdit::NoWrap);
        lastVetVisitLabel = new QTextEdit(frame_3);
        lastVetVisitLabel->setObjectName("lastVetVisitLabel");
        lastVetVisitLabel->setGeometry(QRect(440, 265, 161, 31));
        sizePolicy1.setHeightForWidth(lastVetVisitLabel->sizePolicy().hasHeightForWidth());
        lastVetVisitLabel->setSizePolicy(sizePolicy1);
        lastVetVisitLabel->setMinimumSize(QSize(31, 0));
        lastVetVisitLabel->setMaximumSize(QSize(161, 31));
        lastVetVisitLabel->setStyleSheet(QString::fromUtf8("color: #444;\n"
"font-family: Montserrat;\n"
"font-weight: 400;\n"
"font-size: 26px;"));
        lastVetVisitLabel->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        lastVetVisitLabel->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        lastVetVisitLabel->setLineWrapMode(QTextEdit::NoWrap);
        cancelEditButton_1 = new QLabel(frame_3);
        cancelEditButton_1->setObjectName("cancelEditButton_1");
        cancelEditButton_1->setGeometry(QRect(510, 150, 23, 21));
        cancelEditButton_1->setCursor(QCursor(Qt::PointingHandCursor));
        cancelEditButton_1->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
""));
        cancelEditButton_2 = new QLabel(frame_3);
        cancelEditButton_2->setObjectName("cancelEditButton_2");
        cancelEditButton_2->setGeometry(QRect(430, 183, 23, 21));
        cancelEditButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        cancelEditButton_2->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
""));
        cancelEditButton_3 = new QLabel(frame_3);
        cancelEditButton_3->setObjectName("cancelEditButton_3");
        cancelEditButton_3->setGeometry(QRect(440, 215, 23, 21));
        cancelEditButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        cancelEditButton_3->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
""));
        cancelEditButton_4 = new QLabel(frame_3);
        cancelEditButton_4->setObjectName("cancelEditButton_4");
        cancelEditButton_4->setGeometry(QRect(380, 243, 23, 21));
        cancelEditButton_4->setCursor(QCursor(Qt::PointingHandCursor));
        cancelEditButton_4->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
""));
        cancelEditButton_5 = new QLabel(frame_3);
        cancelEditButton_5->setObjectName("cancelEditButton_5");
        cancelEditButton_5->setGeometry(QRect(630, 270, 23, 21));
        cancelEditButton_5->setCursor(QCursor(Qt::PointingHandCursor));
        cancelEditButton_5->setStyleSheet(QString::fromUtf8("background-color: transparent;\n"
""));
        birthDateLabel->raise();
        heightLabel->raise();
        weightLabel->raise();
        vaccineNumberLabel->raise();
        lastVetVisitLabel->raise();
        backToTheDogsListButton->raise();
        infoDogsImage->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        deleteDogButton->raise();
        editDogButton_1->raise();
        editDogButton_2->raise();
        editDogButton_3->raise();
        editDogButton_4->raise();
        editDogButton_5->raise();
        cancelEditButton_1->raise();
        cancelEditButton_2->raise();
        cancelEditButton_3->raise();
        cancelEditButton_4->raise();
        cancelEditButton_5->raise();

        retranslateUi(ViewDogWindow);

        QMetaObject::connectSlotsByName(ViewDogWindow);
    } // setupUi

    void retranslateUi(QWidget *ViewDogWindow)
    {
        ViewDogWindow->setWindowTitle(QCoreApplication::translate("ViewDogWindow", "View dog informations", nullptr));
        navigationMenuLogo->setText(QString());
        pushButton->setText(QCoreApplication::translate("ViewDogWindow", "Doniraj", nullptr));
        homeLabelButton->setText(QCoreApplication::translate("ViewDogWindow", "Po\304\215etna", nullptr));
        aboutUsLabelButton->setText(QCoreApplication::translate("ViewDogWindow", "O nama", nullptr));
        contactUsLabelButton->setText(QCoreApplication::translate("ViewDogWindow", "Kontakt", nullptr));
        pawIconOnTheEdge_2->setText(QString());
        exitButton->setText(QString());
        dogsImage->setText(QString());
        dogsName->setText(QCoreApplication::translate("ViewDogWindow", "TextLabel", nullptr));
        dogsShortDescription->setText(QCoreApplication::translate("ViewDogWindow", "TextLabel", nullptr));
        backToTheDogsListButton->setText(QString());
        infoDogsImage->setText(QString());
        label->setText(QCoreApplication::translate("ViewDogWindow", "Datum ro\304\221enja:", nullptr));
        label_2->setText(QCoreApplication::translate("ViewDogWindow", "Te\305\276ina:", nullptr));
        label_3->setText(QCoreApplication::translate("ViewDogWindow", "Visina:", nullptr));
        label_4->setText(QCoreApplication::translate("ViewDogWindow", "Broj vakcina:", nullptr));
        label_5->setText(QCoreApplication::translate("ViewDogWindow", "Zadnja posjeta veterinaru:", nullptr));
        deleteDogButton->setText(QString());
        editDogButton_1->setText(QString());
        editDogButton_2->setText(QString());
        editDogButton_3->setText(QString());
        editDogButton_4->setText(QString());
        editDogButton_5->setText(QString());
        birthDateLabel->setHtml(QCoreApplication::translate("ViewDogWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Montserrat'; font-size:26px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:26px;\">2017-04-25</span></p></body></html>", nullptr));
        weightLabel->setHtml(QCoreApplication::translate("ViewDogWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Montserrat'; font-size:26px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:26px;\">30kg</span></p></body></html>", nullptr));
        heightLabel->setHtml(QCoreApplication::translate("ViewDogWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Montserrat'; font-size:26px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:26px;\">30cm</span></p></body></html>", nullptr));
        vaccineNumberLabel->setHtml(QCoreApplication::translate("ViewDogWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Montserrat'; font-size:26px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:26px;\">3</span></p></body></html>", nullptr));
        lastVetVisitLabel->setHtml(QCoreApplication::translate("ViewDogWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Montserrat'; font-size:26px; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:26px;\">2017-04-25</span></p></body></html>", nullptr));
        cancelEditButton_1->setText(QString());
        cancelEditButton_2->setText(QString());
        cancelEditButton_3->setText(QString());
        cancelEditButton_4->setText(QString());
        cancelEditButton_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ViewDogWindow: public Ui_ViewDogWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWDOGWINDOW_H
