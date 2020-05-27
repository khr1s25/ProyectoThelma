#include "menusuper.h"
#include "ui_menusuper.h"

MenuSuper::MenuSuper(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MenuSuper)
{
    ui->setupUi(this);

}

MenuSuper::~MenuSuper()
{
    delete ui;
}

void MenuSuper::on_radioCedula_toggled(bool checked)
{
    if(checked == true){
        ui->cedula->setEnabled(true);
    }
    else{
        ui->cedula->setEnabled(false);
    }
}

void MenuSuper::on_radioUsuario_toggled(bool checked)
{
    if(checked == true){
        ui->usuario_2->setEnabled(true);
    }
    else{
        ui->usuario_2->setEnabled(false);
    }
}

void MenuSuper::on_radioPassword_toggled(bool checked)
{
    if(checked == true){
        ui->password_2->setEnabled(true);
    }
    else{
        ui->password_2->setEnabled(false);
    }
}

void MenuSuper::on_radioNombre_toggled(bool checked)
{
    if(checked == true){
        ui->nombre_2->setEnabled(true);
    }
    else{
        ui->nombre_2->setEnabled(false);
    }
}

void MenuSuper::on_radioApellidos_toggled(bool checked)
{
    if(checked == true){
        ui->apellidos_2->setEnabled(true);
    }
    else{
        ui->apellidos_2->setEnabled(false);
    }
}

void MenuSuper::on_radioPhone_toggled(bool checked)
{
    if(checked == true){
        ui->telefono_2->setEnabled(true);
    }
    else{
        ui->telefono_2->setEnabled(false);
    }
}

void MenuSuper::on_radioEMail_toggled(bool checked)
{
    if(checked == true){
        ui->email_2->setEnabled(true);
    }
    else{
        ui->email_2->setEnabled(false);
    }
}

void MenuSuper::on_radioCedula_2_toggled(bool checked)
{
    if(checked == true){
        ui->cedula_2->setEnabled(true);
    }
    else{
        ui->cedula_2->setEnabled(false);
    }
}

void MenuSuper::on_mBuscarPB_clicked()
{
    QString user=ui->mUserLineE->text();
    conOpen();
    QSqlQuery qry;
    qry.prepare("SELECT * FROM TRABAJADOR where user='"+user+"';");
    if(qry.exec()){
    int userNo = qry.record().indexOf("user");
    int passNo = qry.record().indexOf("password");
    int nombreNo = qry.record().indexOf("nombre");
    int apellidosNo = qry.record().indexOf("apellidos");
    int telNo = qry.record().indexOf("telefono");
    int emailNo = qry.record().indexOf("email");
    int cedulaNo = qry.record().indexOf("cedula");
    while (qry.next()) {
        QString userQ = qry.value(userNo).toString();
        QString password = qry.value(passNo).toString();
        QString nombre = qry.value(nombreNo).toString();
        QString apellidos = qry.value(apellidosNo).toString();
        QString telefono = qry.value(telNo).toString();
        QString email = qry.value(emailNo).toString();
        QString cedula = qry.value(cedulaNo).toString();

        ui->usuario_2->setText(userQ);
        ui->password_2->setText(password);
        ui->nombre_2->setText(nombre);
        ui->apellidos_2->setText(apellidos);
        ui->telefono_2->setText(telefono);
        ui->email_2->setText(email);
        ui->cedula_2->setText(cedula);

    }
    }
    ui->mUserLineE->clear();
    conClose();
    proyecto.close();
}

void MenuSuper::on_pushButton_clicked()
{
   QString nombre,appelidos,user,password,telefono,email,cedula;
   nombre=ui->nombre->text();
   appelidos=ui->apellidos->text();
   user=ui->usuario->text();
   password=ui->password->text();
   telefono=ui->telefono->text();
   email=ui->email->text();
   cedula=ui->cedula->text();

   conOpen();
   QSqlQuery qry;
   qry.prepare("INSERT INTO TRABAJADOR VALUES ('"+user+"','"+password+"','"+nombre+"','"+appelidos+"','"+telefono+"','"+email+"','"+cedula+"');");

   if(qry.exec()){
       QMessageBox message;
       message.setText("Trabajador agregado");
       message.setWindowTitle("Exito");
       message.exec();
   }
   conClose();
   proyecto.close();
   ui->nombre->clear();
   ui->apellidos->clear();
   ui->usuario->clear();
   ui->password->clear();
   ui->telefono->clear();
   ui->email->clear();
   ui->cedula->clear();
}


void MenuSuper::on_eUserPB_clicked()
{
    QString user=ui->eUser->text();
    conOpen();
    QSqlQuery qry;
    qry.prepare("DELETE FROM TRABAJADOR where user='"+user+"';");
    if(qry.exec()){
        QMessageBox message;
        message.setText("Trabajador Eliminado");
        message.setWindowTitle("eliminado");
        message.exec();
    }
    else{
        qDebug()<<qry.lastError();
    }
    ui->eUser->clear();
    conClose();
    proyecto.close();
}

void MenuSuper::on_mostrar_clicked()
{
    conOpen();
    QSqlTableModel *model = new QSqlTableModel(this);

    model->setTable("TRABAJADOR");
    model->select();
    ui->tableView->setModel(model);
    conClose();
    proyecto.close();
    proyecto.removeDatabase(QSqlDatabase::defaultConnection);
}

void MenuSuper::on_pushButton_2_clicked()
{
    QString nombre,appelidos,user,password,telefono,email,cedula;
    nombre=ui->nombre_2->text();
    appelidos=ui->apellidos_2->text();
    user=ui->usuario_2->text();
    password=ui->password_2->text();
    telefono=ui->telefono_2->text();
    email=ui->email_2->text();
    cedula=ui->cedula_2->text();

    conOpen();
    QSqlQuery qry;
    qry.prepare("UPDATE TRABAJADOR SET user='"+user+"',password='"+password+"',nombre='"+nombre+"',apellidos='"+appelidos+"',telefono='"+telefono+"',email='"+email+"',cedula='"+cedula+"' where user='"+user+"';");

    if(qry.exec()){
        QMessageBox message;
        message.setText("Trabajador modificado");
        message.setWindowTitle("Exito");
        message.exec();
    }
    conClose();
    proyecto.close();
    ui->nombre_2->clear();
    ui->apellidos_2->clear();
    ui->usuario_2->clear();
    ui->password_2->clear();
    ui->telefono_2->clear();
    ui->email_2->clear();
    ui->cedula_2->clear();
}
