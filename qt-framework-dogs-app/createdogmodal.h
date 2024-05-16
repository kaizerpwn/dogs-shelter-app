#ifndef CREATEDOGMODAL_H
#define CREATEDOGMODAL_H

#include <QWidget>

namespace Ui {
class CreateDogModal;
}

class CreateDogModal : public QWidget
{
    Q_OBJECT

public:
    explicit CreateDogModal(QWidget *parent = nullptr);
    ~CreateDogModal();
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    int m_nMouseClick_X_Coordinate;
    int m_nMouseClick_Y_Coordinate;
    bool eventFilter(QObject* obj, QEvent* event) override;

private slots:
    void on_pushButton_clicked();

private:
    Ui::CreateDogModal *ui;
};

#endif // CREATEDOGMODAL_H
