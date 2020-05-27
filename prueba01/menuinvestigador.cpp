#include "menuinvestigador.h"
#include "ui_menuinvestigador.h"

MenuInvestigador::MenuInvestigador(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MenuInvestigador)
{
    ui->setupUi(this);
}

MenuInvestigador::~MenuInvestigador()
{
    delete ui;
}

void MenuInvestigador::mostrar()
{
    conOpen();
    QSqlTableModel *model = new QSqlTableModel(this);

    model->setTable("PACIENTE");
    model->select();
    ui->mostrarTable->setModel(model);
    conClose();
    consulorio.close();
}


void MenuInvestigador::on_eTextPB_clicked()
{
//    QString folio=ui->eFolio->text();
//    conOpen();
//    QSqlQuery qry;
//    qry.prepare("DELETE FROM PACIENTE where folio='"+folio+"';");
//    if(qry.exec()){
//        QMessageBox message;
//        message.setText("Paciente Eliminado");
//        message.setWindowTitle("eliminado");
//        message.exec();
//    }
//    else{
//        qDebug()<<qry.lastError();
//    }
//    ui->eFolio->clear();
//    conClose();
//    consulorio.close();
}

void MenuInvestigador::on_mBuscarPB_clicked()
{
//    QString folio=ui->mFolioLineE->text();
//    conOpen();
//    QSqlQuery qry;
//    qry.prepare("SELECT * FROM PACIENTE where folio='"+folio+"';");
//    if(qry.exec()){
//    int folioNo = qry.record().indexOf("folio");
//    int nombreNo = qry.record().indexOf("nombre");
//    int apellidosNo = qry.record().indexOf("apellido");
//    int telNo = qry.record().indexOf("telefono");
//    int emailNo = qry.record().indexOf("email");
//    int direccionNo = qry.record().indexOf("direccion");
//    while (qry.next()) {
//        QString folioQ = qry.value(folioNo).toString();
//        QString nombre = qry.value(nombreNo).toString();
//        QString apellidos = qry.value(apellidosNo).toString();
//        QString telefono = qry.value(telNo).toString();
//        QString email = qry.value(emailNo).toString();
//        QString direccion = qry.value(direccionNo).toString();

//        ui->lineEdit->setText(direccion);

//    }
//    }
//    conClose();
//    ui->mFolioLineE->clear();
//    consulorio.close();
}
