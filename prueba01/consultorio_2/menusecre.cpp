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

void MenuSecre::on_Agregar_clicked()
{
    QString folio,fecha,hora,uPsicologo,fPaciente;

    folio=ui->folio->text();
    fecha=ui->fecha->text();
    hora=ui->hora->text();
    uPsicologo=ui->uPsicologo->text();
    fPaciente=ui->fPaciente->text();

    conOpen();
    QSqlQuery qry;
    qry.prepare("INSERT INTO CITA VALUES ('"+folio+"','"+fecha+"','"+hora+"','"+uPsicologo+"','"+fPaciente+"');");

    if(qry.exec()){
        QMessageBox message;
        message.setText("Cita agregada");
        message.setWindowTitle("Exito");
        message.exec();
    }
    consulorio.close();
    conClose();
}

void MenuSecre::on_Eliminar_clicked()
{
    QString folio=ui->eFolio->text();
    conOpen();
    QSqlQuery qry;
    qry.prepare("DELETE FROM CITA where folio='"+folio+"';");
    if(qry.exec()){
        QMessageBox message;
        message.setText("Cita Eliminada");
        message.setWindowTitle("eliminado");
        message.exec();
    }
    else{
        qDebug()<<qry.lastError();
    }
    ui->eFolio->clear();
    conClose();
    consulorio.close();
}
