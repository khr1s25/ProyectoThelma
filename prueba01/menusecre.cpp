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

    model->setTable("CITA");
    model->select();
    ui->tableView->setModel(model);
    consulorio.close();
    conClose();
}

void MenuSecre::on_descargaArchvio_clicked()
{

}


void MenuSecre::on_aceptado_toggled(bool checked)
{

}

void MenuSecre::on_denegado_toggled(bool checked)
{

}



void MenuSecre::on_enviarRevision_clicked()
{

}
