#include "mainwindow.h"
#include <QApplication>
#include "QTextCodec"
#include "logindialog.h"
#include "connection.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // 必须在创建数据库之前使用，不然无法在数据库中使用中文
    //QTextCodec::setCodecForTr(QTextCodec::codecForLocale());
    //QTextCodec::setCodecForCStrings(QTextCodec::codecForLocale());

    if (!createConnection())return 0;

    MainWindow w;
    logindialog dlg;
    if (dlg.exec() == QDialog::Accepted){
        w.show();
        return a.exec();
    }else{
        return 0;
    }
}
