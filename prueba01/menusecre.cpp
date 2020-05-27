#include "menusecre.h"
#include "ui_menusecre.h"

MenuSecre::MenuSecre(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MenuSecre)
{
    ui->setupUi(this);   
}

MenuSecre::~MenuSecre()
{
    delete ui;
}

void MenuSecre::on_Mostrar_clicked()
{
    conOpen();
    QSqlTableModel *model = new QSqlTableModel(this);

    model->setTable("documento");
    model->select();
    ui->tableView->setModel(model);
    proyecto.close();
    conClose();
}

void MenuSecre::on_descargaArchvio_clicked()
{

}


void MenuSecre::on_aceptado_toggled(bool checked)
{
    if(checked==true){
        ui->denegado->setEnabled(false);
        ui->enviarRevision->setEnabled(true);
    }
}

void MenuSecre::on_denegado_toggled(bool checked)
{
    if(checked==true){
        ui->aceptado->setEnabled(false);
        ui->enviarRevision->setEnabled(true);
    }
}



void MenuSecre::on_enviarRevision_clicked()
{
    QString documento = ui->archivo->text();
    if(ui->aceptado->isEnabled()){
        conOpen();
        QSqlQuery qry;
        qry.prepare("UPDATE documento SET status='true' where nombre='"+documento+"';");

        if(qry.exec()){
            QMessageBox message;
            message.setText("Trabajador modificado");
            message.setWindowTitle("Exito");
            message.exec();
        }
        conClose();
        proyecto.close();
    }
    else if(ui->denegado->isEnabled()){
        conOpen();
        QSqlQuery qry;
        qry.prepare("UPDATE documento SET status='false' where nombre='"+documento+"';");

        if(qry.exec()){
            QMessageBox message;
            message.setText("Trabajador modificado");
            message.setWindowTitle("Exito");
            message.exec();
        }
        conClose();
        proyecto.close();
    }
}
