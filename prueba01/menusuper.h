#ifndef MENUSUPER_H
#define MENUSUPER_H

#include <QMainWindow>
#include <vector>
#include "trabajador.h"
#include <QDebug>
#include <QSqlDatabase>
#include <QSql>
#include <QtSql>
#include <QMessageBox>


namespace Ui {
class MenuSuper;
}

class MenuSuper : public QMainWindow
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
    explicit MenuSuper(QWidget *parent = nullptr);
    ~MenuSuper();

private slots:
    void on_radioCedula_toggled(bool checked);

    void on_radioUsuario_toggled(bool checked);

    void on_radioPassword_toggled(bool checked);

    void on_radioNombre_toggled(bool checked);

    void on_radioApellidos_toggled(bool checked);

    void on_radioPhone_toggled(bool checked);

    void on_radioEMail_toggled(bool checked);

    void on_radioCedula_2_toggled(bool checked);

    void on_mBuscarPB_clicked();

    void on_pushButton_clicked();

    void on_eUserPB_clicked();

    void on_mostrar_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MenuSuper *ui;
    vector<Trabajador> secre;
    vector<Trabajador> psico;

};

#endif // MENUSUPER_H
