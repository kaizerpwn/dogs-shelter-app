#ifndef VIEWDOGWINDOW_H
#define VIEWDOGWINDOW_H

#include <QWidget>
#include <QEvent>
#include <QLabel>
#include <QPushButton>
#include <QTextEdit>
#include <QObject>
#include <QMouseEvent>
#include <QPoint>

namespace Ui {
class ViewDogWindow;
}

class ViewDogWindow : public QWidget
{
    Q_OBJECT

protected:
    bool eventFilter(QObject* obj, QEvent* event) override;

public:
    explicit ViewDogWindow(QWidget *parent = nullptr, QWidget *parentWidget = nullptr);
    ~ViewDogWindow();
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    int m_nMouseClick_X_Coordinate;
    int m_nMouseClick_Y_Coordinate;
    void setDogInfo(const QString &name, const QString &race, const QString &birthDate, const QString &weight, const QString &height, const QString &lastVetVisit, const QString &image, const QString &dogsId);
    void handleEditLabel(QLabel* editLabel, bool& editingFlag, QTextEdit* label, QLabel* cancelLabel);
    void handleCancelAction(QLabel* editLabel, bool& editingFlag, QTextEdit* label, QLabel* cancelLabel);
    void updateDogInfo(const QString &field, const QString &value, const QString &dogsId);

private:
    Ui::ViewDogWindow *ui;
    QWidget *m_parentWidget;
    QString dogsId;
    bool dogsBirthDateEditing = false;
    bool weightEditing = false;
    bool heightEditing = false;
    bool vaccineNumberEditing = false;
    bool lastVetVisitEditing = false;
};

#endif
