#ifndef INSERTSENSOR_H
#define INSERTSENSOR_H

#include <QDialog>

namespace Ui {
class insertSensor;
}

class insertSensor : public QDialog
{
    Q_OBJECT

public:
    explicit insertSensor(QWidget *parent = 0);
    ~insertSensor();

private slots:
    void on_pushButton_clicked();

private:
    Ui::insertSensor *ui;
};

#endif // INSERTSENSOR_H
