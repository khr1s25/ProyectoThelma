#ifndef MENUSUPER_H
#define MENUSUPER_H

#include <QMainWindow>
#include <vector>
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
    explicit MenuSuper(QWidget *parent = nullptr);
    ~MenuSuper();

private slots:
    void on_radioCedula_toggled(bool checked);

    void on_radioUsuario_toggled(bool checked);

    void on_radioPassword_toggled(bool checked);

    void on_radioNombre_toggled(bool checked);

    void on_radioEdad_toggled(bool checked);

    void on_radioSexo_toggled(bool checked);

    void on_radioEMail_toggled(bool checked);

    void on_radioCedula_2_toggled(bool checked);

    void on_mBuscarPB_clicked();

    void on_pushButton_clicked();

    void on_eUserPB_clicked();

    void on_mostrar_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MenuSuper *ui;
};

#endif // MENUSUPER_H
