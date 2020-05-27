#ifndef MENUPSICOLOGO_H
#define MENUPSICOLOGO_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSql>
#include <QtSql>
#include <QMessageBox>

namespace Ui {
class MenuPsicologo;
}

class MenuPsicologo : public QMainWindow
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
    explicit MenuPsicologo(QWidget *parent = nullptr);
    ~MenuPsicologo();
    void mostrar();

private slots:
    void on_pushButton_clicked();

    void on_eFolioPB_clicked();

    void on_pushButton_2_clicked();

    void on_mBuscarPB_clicked();

    void on_radioFolio_toggled(bool checked);

    void on_radioNombre_toggled(bool checked);

    void on_radioApellidos_toggled(bool checked);

    void on_radioPhone_toggled(bool checked);

    void on_radioEMail_toggled(bool checked);

    void on_checkBox_toggled(bool checked);


private:
    Ui::MenuPsicologo *ui;
};

#endif // MENUPSICOLOGO_H
