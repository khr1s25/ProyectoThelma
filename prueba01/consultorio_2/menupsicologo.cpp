#include "menupsicologo.h"
#include "ui_menupsicologo.h"

MenuPsicologo::MenuPsicologo(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MenuPsicologo)
{
    ui->setupUi(this);
}

MenuPsicologo::~MenuPsicologo()
{
    delete ui;
}

void MenuPsicologo::mostrar()
{
    conOpen();
    QSqlTableModel *model = new QSqlTableModel(this);

    model->setTable("PACIENTE");
    model->select();
    ui->mostrarTable->setModel(model);
    conClose();
    consulorio.close();
}

void MenuPsicologo::on_pushButton_clicked()
{
    QString nombre,appelidos,folio,telefono,email,direccion;
    nombre=ui->nombre->text();
    appelidos=ui->apellidos->text();
    folio=ui->folio->text();
    telefono=ui->telefono->text();
    email=ui->email->text();
    direccion=ui->direccion->text();

    conOpen();
    QSqlQuery qry;
    qry.prepare("INSERT INTO PACIENTE VALUES ('"+folio+"','"+nombre+"','"+appelidos+"','"+telefono+"','"+email+"','"+direccion+"');");

    if(qry.exec()){
        QMessageBox message;
        message.setText("Paciente agregado");
        message.setWindowTitle("Exito");
        message.exec();
    }
    else{
        qDebug()<<qry.lastError();
    }
    conClose();
    consulorio.close();
}

void MenuPsicologo::on_eFolioPB_clicked()
{
    QString folio=ui->eFolio->text();
    conOpen();
    QSqlQuery qry;
    qry.prepare("DELETE FROM PACIENTE where folio='"+folio+"';");
    if(qry.exec()){
        QMessageBox message;
        message.setText("Paciente Eliminado");
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

void MenuPsicologo::on_pushButton_2_clicked()
{
    QString nombre,appelidos,folio,telefono,email,direccion;
    nombre=ui->nombre_2->text();
    appelidos=ui->apellidos_2->text();
    folio=ui->folio_2->text();
    telefono=ui->telefono_2->text();
    email=ui->email_2->text();
    direccion=ui->direccion_2->text();

    conOpen();
    QSqlQuery qry;
    qry.prepare("UPDATE PACIENTE SET folio='"+folio+"',nombre='"+nombre+"',apellido='"+appelidos+"',telefono='"+telefono+"',email='"+email+"',direccion='"+direccion+"' where folio='"+folio+"';");

    if(qry.exec()){
        QMessageBox message;
        message.setText("Paciente modificado");
        message.setWindowTitle("Exito");
        message.exec();
        mostrar();
    }
    conClose();
    consulorio.close();
}

void MenuPsicologo::on_mBuscarPB_clicked()
{
    QString folio=ui->mFolioLineE->text();
    conOpen();
    QSqlQuery qry;
    qry.prepare("SELECT * FROM PACIENTE where folio='"+folio+"';");
    if(qry.exec()){
    int folioNo = qry.record().indexOf("folio");
    int nombreNo = qry.record().indexOf("nombre");
    int apellidosNo = qry.record().indexOf("apellido");
    int telNo = qry.record().indexOf("telefono");
    int emailNo = qry.record().indexOf("email");
    int direccionNo = qry.record().indexOf("direccion");
    while (qry.next()) {
        QString folioQ = qry.value(folioNo).toString();
        QString nombre = qry.value(nombreNo).toString();
        QString apellidos = qry.value(apellidosNo).toString();
        QString telefono = qry.value(telNo).toString();
        QString email = qry.value(emailNo).toString();
        QString direccion = qry.value(direccionNo).toString();

        ui->folio_2->setText(folioQ);
        ui->nombre_2->setText(nombre);
        ui->apellidos_2->setText(apellidos);
        ui->telefono_2->setText(telefono);
        ui->email_2->setText(email);
        ui->lineEdit->setText(direccion);

    }
    }
    conClose();
    ui->mFolioLineE->clear();
    consulorio.close();
}


void MenuPsicologo::on_radioFolio_toggled(bool checked)
{
    if(checked == true){
        ui->folio_2->setEnabled(true);
    }
    else{
        ui->folio_2->setEnabled(false);
    }
}

void MenuPsicologo::on_radioNombre_toggled(bool checked)
{
    if(checked == true){
        ui->nombre_2->setEnabled(true);
    }
    else{
        ui->nombre_2->setEnabled(false);
    }
}

void MenuPsicologo::on_radioApellidos_toggled(bool checked)
{
    if(checked == true){
        ui->apellidos_2->setEnabled(true);
    }
    else{
        ui->apellidos_2->setEnabled(false);
    }
}

void MenuPsicologo::on_radioPhone_toggled(bool checked)
{
    if(checked == true){
        ui->telefono_2->setEnabled(true);
    }
    else{
        ui->telefono_2->setEnabled(false);
    }
}

void MenuPsicologo::on_radioEMail_toggled(bool checked)
{
    if(checked == true){
        ui->email_2->setEnabled(true);
    }
    else{
        ui->email_2->setEnabled(false);
    }
}

void MenuPsicologo::on_checkBox_toggled(bool checked)
{
    if(checked == true){
        ui->lineEdit->setEnabled(true);
    }
    else{
        ui->lineEdit->setEnabled(false);
    }
}
