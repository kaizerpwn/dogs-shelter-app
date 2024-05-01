#ifndef DOGINFODIALOG_H
#define DOGINFODIALOG_H

#include <QDialog>

namespace Ui {
class DogInfoDialog;
}

class DogInfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DogInfoDialog(QWidget *parent = nullptr);
    ~DogInfoDialog();

    bool eventFilter(QObject* obj, QEvent* event);
    void setDogInfo(const QString &name, const QString &race, const QString &birthDate, const QString &weight, const QString &height, const QString &lastVetVisit);

private:
    Ui::DogInfoDialog *ui;
};


#endif // DOGINFODIALOG_H
