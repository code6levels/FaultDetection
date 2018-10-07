#include "logindialog.h"
#include "ui_logindialog.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QDebug>
logindialog::logindialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::logindialog)
{
    ui->setupUi(this);
}

logindialog::~logindialog()
{
    delete ui;
}

//登录退出按钮
void logindialog::on_quitBtn_clicked()
{
    QDialog::reject();
}
// 登录按钮
void logindialog::on_loginBtn_clicked()
{
    if (ui->pwdLineEdit->text().isEmpty()) {
        QMessageBox::information(this, tr("请输入密码"),
                                 tr("请先输入密码再登录！"), QMessageBox::Ok);
        ui->pwdLineEdit->setFocus();
    } else {
        QSqlQuery query;
        query.exec("select pwd from password");
        query.next();
        if (query.value(0).toString() == ui->pwdLineEdit->text()) {
            QDialog::accept();
        } else {
            QMessageBox::warning(this, tr("密码错误"),
                                 tr("请输入正确的密码再登录！"), QMessageBox::Ok);
            ui->pwdLineEdit->clear();
            ui->pwdLineEdit->setFocus();
        }
    }
}
