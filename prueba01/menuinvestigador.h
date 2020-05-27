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
    explicit MenuInvestigador(QWidget *parent = nullptr);
    ~MenuInvestigador();
    void mostrar();

private slots:


    void on_eText_textChanged(const QString &arg1);

    void on_eTextPB_clicked();

    void on_mFolioLineE_textChanged(const QString &arg1);

    void on_mBuscarPB_clicked();

private:
    Ui::MenuInvestigador *ui;
};

#endif // MENUPSICOLOGO_H
