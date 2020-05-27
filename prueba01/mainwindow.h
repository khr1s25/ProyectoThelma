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
    QSqlDatabase proyecto;
    void conClose(){
        proyecto.close();
        proyecto.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool conOpen(){
        proyecto = QSqlDatabase::addDatabase("QPSQL");
        proyecto.setHostName("raja.db.elephantsql.com ");
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
