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
#include "citas.h"
#include "paciente.h"
#include "trabajador.h"
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
    QSqlDatabase consulorio;
    void conClose(){
        consulorio.close();
        consulorio.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool conOpen(){
        consulorio = QSqlDatabase::addDatabase("QSQLITE");
        consulorio.setDatabaseName("/home/khris/Desktop/ing_soft/baseSqlite/consultorio.db");
        if(!consulorio.open()){
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
    Trabajador current;

public slots:
};

#endif // ADMIN_H
