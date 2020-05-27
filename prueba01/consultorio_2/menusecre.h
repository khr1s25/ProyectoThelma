#ifndef MENUSECRE_H
#define MENUSECRE_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSql>
#include <QtSql>
#include <QMessageBox>

namespace Ui {
class MenuSecre;
}

class MenuSecre : public QMainWindow
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
    explicit MenuSecre(QWidget *parent = nullptr);
    ~MenuSecre();

private slots:
    void on_Mostrar_clicked();

    void on_Agregar_clicked();

    void on_Eliminar_clicked();

private:
    Ui::MenuSecre *ui;
};

#endif // MENUSECRE_H
