#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <menusecre.h>
#include <QSqlDatabase>
#include <QSql>
#include <QtSql>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QSqlDatabase consulorio;
    void conClose(){
        consulorio.close();
    }
    bool conOpen(){
        consulorio = QSqlDatabase::addDatabase("QSQ");
        consulorio.setDatabaseName("/home/khris/Desktop/ing_soft/baseSqlite/consultorio.db");
        if(!consulorio.open()){
            qDebug()<<"Database not open";
            return false;
        }
        else{
            return true;
        }
    }

signals:
    void loginValidation(QString user,QString password);

public slots:
    void on_enter_clicked();

private slots:
    void on_password_returnPressed();

private:
    Ui::MainWindow *ui;
    MenuSecre *se;
};
#endif // MAINWINDOW_H
