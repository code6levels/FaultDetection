#include "insertsensor.h"
#include "ui_insertsensor.h"

insertSensor::insertSensor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::insertSensor)
{
    ui->setupUi(this);
}

insertSensor::~insertSensor()
{
    delete ui;
}
// 添加传感器
void insertSensor::on_pushButton_clicked()
{
    QString insertsensor;

}
