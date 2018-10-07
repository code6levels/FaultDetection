#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "insertsensor.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //显示
   /* QString name=ui->namelineEdit->text();//收件人姓名
    tel=ui->tellineEdit->text();//获取电话信息
    QString danhao=ui->numlineEdit->text();//获取单号信息
    QSqlQueryModel *model = new QSqlQueryModel;
    QSqlQueryModel *model = new QSqlQueryModel(ui->tableView);
    model->setQuery("select *from thing where thing.thing_id='"+danhao+"' "
                      "and thing.recive_pho='"+name+"'");
    model->setHeaderData(0, Qt::Horizontal, tr("订单号"));
    model->setHeaderData(1, Qt::Horizontal, tr("收件人"));
    model->setHeaderData(2, Qt::Horizontal, tr("寄件人"));
    model->setHeaderData(3, Qt::Horizontal, tr("验证码"));
    model->setHeaderData(4, Qt::Horizontal, tr("箱子号"));
    model->setHeaderData(5, Qt::Horizontal, tr("物品状态"));
    //qDebug()<<name<<danhao;
    ui->tableView->setModel(model);
    //ui->tableView->show();


    model = new QSqlTableModel(this);
    model->setTable("Sensors");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select(); //选取整个表的所有行

    //不显示name属性列,如果这时添加记录，则该属性的值添加不上
    // model->removeColumn(1);

    ui->tableView->setModel(model);

    //使其不可编辑
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    */
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_4_clicked()
{
     ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_selectButton_clicked()
{
     ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_showButton_clicked()
{
     ui->stackedWidget->setCurrentIndex(2);
}
//增加传感器
void MainWindow::on_pushButton_2_clicked()
{
    insertSensor dlg;
    if (dlg.exec() == QDialog::Accepted){

        dlg.close();
    }
}
