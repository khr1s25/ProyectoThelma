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
    explicit MenuSecre(QWidget *parent = nullptr);
    ~MenuSecre();

private slots:
    void on_Mostrar_clicked();

    void on_enviarRevision_clicked();

    void on_descargaArchvio_clicked();

    void on_aceptado_toggled(bool checked);

    void on_denegado_toggled(bool checked);

private:
    Ui::MenuSecre *ui;
};

#endif // MENUSECRE_H
