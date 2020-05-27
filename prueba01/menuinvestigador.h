#ifndef MENUPSICOLOGO_H
#define MENUPSICOLOGO_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSql>
#include <QtSql>
#include <QMessageBox>

namespace Ui {
class MenuInvestigador;
}

class MenuInvestigador : public QMainWindow
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
    explicit MenuInvestigador(QWidget *parent = nullptr);
    ~MenuInvestigador();
    void mostrar();

private slots:

    void on_eTextPB_clicked();

    void on_mBuscarPB_clicked();

    void on_mostrar_clicked();

private:
    Ui::MenuInvestigador *ui;
};

#endif // MENUPSICOLOGO_H
