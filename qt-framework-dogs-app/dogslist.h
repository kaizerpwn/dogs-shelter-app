#ifndef DOGSLIST_H
#define DOGSLIST_H

#include <QMainWindow>
#include <QObject>
#include <QEvent>
#include <QMouseEvent>
#include <QVBoxLayout>

namespace Ui {
class DogsList;
}

class DogsList : public QMainWindow
{
    Q_OBJECT

public:
    explicit DogsList(QWidget *parent = nullptr);
    ~DogsList();

protected:
    void exportData();
    bool eventFilter(QObject* obj, QEvent* event) override;
    void addDog(const int& id, const QString& name, const QString& age, const QString& description, const QString& imagePath, QGridLayout *layout, int row, int col);
private:
    Ui::DogsList *ui;
};

#endif
