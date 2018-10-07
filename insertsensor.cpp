#include "insertsensor.h"
#include "ui_insertsensor.h"
#include <QSqlDatabase>
#include  <QDebug>
#include <QSqlQuery>

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
    QSqlDatabase mydb=QSqlDatabase::addDatabase("QSQLITE","wconntosqlite");
    mydb.setDatabaseName("f:\\QT Project\\FaultDetection\\testDB.db");
            if(mydb.open())
            {
                QSqlQuery query(mydb);
                QString sqlstr="insert into sensor (type,name,axis,frequency,lower_limit,upper_limit,resolution,scale,unit,remark) values ('"

                        +ui->lineEdit->text()+"','"

                        +ui->lineEdit_2->text()+"','"

                        +ui->lineEdit_3->text()+"','"

                        +ui->lineEdit_4->text()+"','"

                        +ui->lineEdit_5->text()+"','"

                        +ui->lineEdit_6->text()+"','"

                        +ui->lineEdit_7->text()+"','"

                        +ui->lineEdit_8->text()+"','"

                        +ui->lineEdit_9->text()+"','"

                        +ui->lineEdit_10->text()+"')";
                bool isok=query.exec(sqlstr);
                if(isok)qDebug()<<"数据写入成功";
            }
}
