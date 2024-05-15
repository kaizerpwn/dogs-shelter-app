
#include "viewdogwindow.h"
#include "ui_viewdogwindow.h"
#include "database.h"

ViewDogWindow::ViewDogWindow(QWidget *parent, QWidget *parentWidget)
    : QWidget(parent), ui(new Ui::ViewDogWindow), m_parentWidget(parentWidget)
{
    ui->setupUi(this);
    ui->exitButton->installEventFilter(this);
    ui->homeLabelButton->installEventFilter(this);
    ui->navigationMenuLogo->installEventFilter(this);
    ui->backToTheDogsListButton->installEventFilter(this);
    ui->editDogButton_1->installEventFilter(this);
    ui->editDogButton_2->installEventFilter(this);
    ui->editDogButton_3->installEventFilter(this);
    ui->editDogButton_4->installEventFilter(this);
    ui->editDogButton_5->installEventFilter(this);

    ui->cancelEditButton_1->installEventFilter(this);
    ui->cancelEditButton_2->installEventFilter(this);
    ui->cancelEditButton_3->installEventFilter(this);
    ui->cancelEditButton_4->installEventFilter(this);
    ui->cancelEditButton_5->installEventFilter(this);

    QPixmap navigationMenuLogo("../resources/images/logo-265x59.png");
    ui->navigationMenuLogo->setPixmap(navigationMenuLogo);

    QPixmap pawIconOnTheEdge("../resources/images/background-particle-132x141.png");
    ui->pawIconOnTheEdge_2->setPixmap(pawIconOnTheEdge);

    QPixmap exitButtonImage("../resources/images/exit.png");
    ui->exitButton->setPixmap(exitButtonImage);

    QPixmap backToTheDogsListImage("../resources/images/back.png");
    ui->backToTheDogsListButton->setPixmap(backToTheDogsListImage);

    QPixmap dogInfoMessageImage("../resources/images/dog_info_message.png");
    ui->infoDogsImage->setPixmap(dogInfoMessageImage);

    QPixmap deleteDogButtonImage("../resources/images/delete.png");
    ui->deleteDogButton->setPixmap(deleteDogButtonImage);

    QPixmap editButtonIcon("../resources/images/edit.png");
    QPixmap cancelEditButton("../resources/images/close.png");
    ui->editDogButton_1->setPixmap(editButtonIcon);
    ui->editDogButton_2->setPixmap(editButtonIcon);
    ui->editDogButton_3->setPixmap(editButtonIcon);
    ui->editDogButton_4->setPixmap(editButtonIcon);
    ui->editDogButton_5->setPixmap(editButtonIcon);

    ui->cancelEditButton_1->setPixmap(cancelEditButton);
    ui->cancelEditButton_2->setPixmap(cancelEditButton);
    ui->cancelEditButton_3->setPixmap(cancelEditButton);
    ui->cancelEditButton_4->setPixmap(cancelEditButton);
    ui->cancelEditButton_5->setPixmap(cancelEditButton);

    ui->cancelEditButton_1->setVisible(false);
    ui->cancelEditButton_2->setVisible(false);
    ui->cancelEditButton_3->setVisible(false);
    ui->cancelEditButton_4->setVisible(false);
    ui->cancelEditButton_5->setVisible(false);

    ui->birthDateLabel->setEnabled(false);
    ui->vaccineNumberLabel->setEnabled(false);
    ui->lastVetVisitLabel->setEnabled(false);
    ui->heightLabel->setEnabled(false);
    ui->weightLabel->setEnabled(false);
}

ViewDogWindow::~ViewDogWindow()
{
    delete ui;
}

void ViewDogWindow::mousePressEvent(QMouseEvent *event)
{
    m_nMouseClick_X_Coordinate = event->position().x();
    m_nMouseClick_Y_Coordinate = event->position().y();
}

void ViewDogWindow::mouseMoveEvent(QMouseEvent *event)
{
    move(event->globalPosition().x() - m_nMouseClick_X_Coordinate, event->globalPosition().y() - m_nMouseClick_Y_Coordinate);
}

void ViewDogWindow::handleCancelAction(QLabel* editLabel, bool& editingFlag, QTextEdit* label, QLabel* cancelLabel) {
    editingFlag = !editingFlag;
    QPixmap pixmap(editingFlag ? "../resources/images/done.png" : "../resources/images/edit.png");
    editLabel->setPixmap(pixmap);
    if (label)
        label->setEnabled(editingFlag);
    if (cancelLabel)
        cancelLabel->setVisible(editingFlag);
}

void ViewDogWindow::handleEditLabel(QLabel* editLabel, bool& editingFlag, QTextEdit* label, QLabel* cancelLabel) {
    if (editingFlag == false) {
        QPixmap doneImage("../resources/images/done.png");
        editLabel->setPixmap(doneImage);
        editingFlag = true;
        if (label)
            label->setEnabled(true);
        if (cancelLabel)
            cancelLabel->setVisible(true);
    } else {
        QPixmap editImage("../resources/images/edit.png");
        editLabel->setPixmap(editImage);
        editingFlag = false;
        if (label)
            label->setEnabled(false);
        if (cancelLabel)
            cancelLabel->setVisible(false);

        if (editLabel == ui->editDogButton_1) {
            updateDogInfo("birth_date", label->toPlainText(), dogsId);
        } else if (editLabel == ui->editDogButton_2) {
            updateDogInfo("weight", label->toPlainText().replace("kg", ""), dogsId);
        } else if (editLabel == ui->editDogButton_3) {
            updateDogInfo("height", label->toPlainText().replace("cm", ""), dogsId);
        } else if (editLabel == ui->editDogButton_4) {
            updateDogInfo("vaccinations", label->toPlainText(), dogsId);
        } else if (editLabel == ui->editDogButton_5) {
            updateDogInfo("last_vet_visit", label->toPlainText(), dogsId);
        }
    }
}

bool ViewDogWindow::eventFilter(QObject* obj, QEvent* event)
{
    if (obj == ui->exitButton)
    {
        if (event->type() == QEvent::MouseButtonPress)
        {
            QMouseEvent* mouseEvent = dynamic_cast<QMouseEvent*>(event);
            if (mouseEvent && mouseEvent->button() == Qt::LeftButton)
            {
                QCoreApplication::quit();
                return true;
            }
        }
    }

    if (obj == ui->homeLabelButton || obj == ui->navigationMenuLogo || obj == ui->backToTheDogsListButton)
    {
        if (event->type() == QEvent::MouseButtonPress)
        {
            QMouseEvent* mouseEvent = dynamic_cast<QMouseEvent*>(event);
            if (mouseEvent && mouseEvent->button() == Qt::LeftButton)
            {
                hide();
                m_parentWidget->show();
                return true;
            }
        }
    }
    if (obj == ui->editDogButton_1 || obj == ui->editDogButton_2 || obj == ui->editDogButton_3 || obj == ui->editDogButton_4 || obj == ui->editDogButton_5 ||
        obj == ui->cancelEditButton_1 || obj == ui->cancelEditButton_2 || obj == ui->cancelEditButton_3 || obj == ui->cancelEditButton_4 || obj == ui->cancelEditButton_5) {
        if (event->type() == QEvent::MouseButtonPress) {
            QMouseEvent* mouseEvent = dynamic_cast<QMouseEvent*>(event);
            if (mouseEvent && mouseEvent->button() == Qt::LeftButton) {
                if (obj == ui->editDogButton_1)
                    handleEditLabel(ui->editDogButton_1, dogsBirthDateEditing, ui->birthDateLabel, ui->cancelEditButton_1);
                else if (obj == ui->editDogButton_2)
                    handleEditLabel(ui->editDogButton_2, weightEditing, ui->weightLabel, ui->cancelEditButton_2);
                else if (obj == ui->editDogButton_3)
                    handleEditLabel(ui->editDogButton_3, heightEditing, ui->heightLabel, ui->cancelEditButton_3);
                else if (obj == ui->editDogButton_4)
                    handleEditLabel(ui->editDogButton_4, vaccineNumberEditing, ui->vaccineNumberLabel, ui->cancelEditButton_4);
                else if (obj == ui->editDogButton_5)
                    handleEditLabel(ui->editDogButton_5, lastVetVisitEditing, ui->lastVetVisitLabel, ui->cancelEditButton_5);

                if (obj == ui->cancelEditButton_1)
                    handleCancelAction(ui->editDogButton_1, dogsBirthDateEditing, ui->birthDateLabel, ui->cancelEditButton_1);
                else if (obj == ui->cancelEditButton_2)
                    handleCancelAction(ui->editDogButton_2, weightEditing, ui->weightLabel, ui->cancelEditButton_2);
                else if (obj == ui->cancelEditButton_3)
                    handleCancelAction(ui->editDogButton_3, heightEditing, ui->heightLabel, ui->cancelEditButton_3);
                else if (obj == ui->cancelEditButton_4)
                    handleCancelAction(ui->editDogButton_4, vaccineNumberEditing, ui->vaccineNumberLabel, ui->cancelEditButton_4);
                else if (obj == ui->cancelEditButton_5)
                    handleCancelAction(ui->editDogButton_5, lastVetVisitEditing, ui->lastVetVisitLabel, ui->cancelEditButton_5);
            }
        }
    }
    return QObject::eventFilter(obj, event);
}

void ViewDogWindow::setDogInfo(const QString &name, const QString &race, const QString &birthDate, const QString &weight, const QString &height, const QString &lastVetVisit, const QString &image, const QString &dogsId)
{
    QPixmap deleteDogButtonImage("../resources/images/dogs/" + image);
    ui->dogsImage->setPixmap(deleteDogButtonImage);

    ui->dogsName->setText(name);
    ui->dogsShortDescription->setText(race);
    ui->birthDateLabel->setText(birthDate);
    ui->weightLabel->setText(weight);
    ui->heightLabel->setText(height);
    ui->lastVetVisitLabel->setText(lastVetVisit);

    this->dogsId = dogsId;
}

void ViewDogWindow::updateDogInfo(const QString &field, const QString &value, const QString &dogsId) {
    QSqlDatabase& db = DatabaseManager::getDatabaseInstance();
    QSqlQuery query(db);

    QString updateQuery = "UPDATE dog SET " + field + " = :value WHERE id = :id";
    query.prepare(updateQuery);
    query.bindValue(":value", value);
    query.bindValue(":id", dogsId);

    if (query.exec()) {
        qDebug() << "Dog information updated successfully.";
    } else {
        qDebug() << "Failed to update dog information:" << query.lastError().text();
    }
}
