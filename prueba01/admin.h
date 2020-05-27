#ifndef ADMIN_H
#define ADMIN_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QSql>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QSqlDatabase>
#include "mainwindow.h"
#include "menusuper.h"
#include "control.h"
#include "menuinvestigador.h"
#include "menusecre.h"
#include <QMessageBox>


class Admin : public QObject
{
    Q_OBJECT

public:
    QSqlDatabase proyecto;
    void conClose(){
        proyecto.close();
        proyecto.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool conOpen(){
        proyecto = QSqlDatabase::addDatabase("QPSQL");
        proyecto.setHostName("raja.db.elephantsql.com");
        proyecto.setDatabaseName("kzsmfegt");
        proyecto.setUserName("kzsmfegt");
        proyecto.setPassword("pFIr6z8v2UOgoO90G6ymgZANW1f0a64z");
        if(!proyecto.open()){
            qDebug()<<"Database not open";
            return false;
        }
        else{
            return true;
        }
    }

public:
    explicit Admin(QObject *parent = nullptr);
    void start();

private slots:
    void log(QString user,QString password);
    void openInves();
    void openSuper();
    void openSecre();

private:
    MainWindow* mainWindow;
    MenuSuper* superUser;
    MenuSecre* secreUser;
    MenuInvestigador* invesUser;
    Control* controller;

public slots:
};

#endif // ADMIN_H
