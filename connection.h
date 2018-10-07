#ifndef CONNECTION_H
#define CONNECTION_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QtSql>
#include <QDebug>
#include <QtXml>

static bool createConnection(){
    QSqlDatabase db;
    if(QSqlDatabase::contains("qt_sql_default_connection"))
        db = QSqlDatabase::database("qt_sql_default_connection");
    else
        db = QSqlDatabase::addDatabase("QSQLITE");


    //QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");


    db.setDatabaseName("F:\\QtProject\\FaultDetection\\testDB.db");

    if (!db.open()) {
        //提示出错
        return false;
    }

    QSqlQuery query;


    // 创建密码表
    query.exec("create table password(pwd varchar primary key)");
    query.exec("insert into password values('123456')");

    return true;
}



#endif // CONNECTION_H
