#include "admin.h"

Admin::Admin(QObject *parent) : QObject(parent)
{
    mainWindow = new MainWindow();
    superUser = new MenuSuper();
    controller = new Control();
    secreUser = new MenuSecre();
    psicoUser = new MenuPsicologo();

    QObject::connect(mainWindow,SIGNAL(loginValidation(QString,QString)),this,SLOT(log(QString,QString)));
    QObject::connect(controller,SIGNAL(abrirSuperMenu()),this,SLOT(openSuper()));
    QObject::connect(controller,SIGNAL(abrirPsicoMenu()),this,SLOT(openPsico()));
    QObject::connect(controller,SIGNAL(abrirSecreMenu()),this,SLOT(openSecre()));
}

void Admin::start()
{
    mainWindow->show();
}

void Admin::log(QString user, QString password)
{
    if(user == "super"){
        if(password == "root"){
            mainWindow->close();
            superUser->show();
            controller->show();
        }
    }
    else{
    conOpen();
    QSqlQuery qry;
    qry.prepare("SELECT * FROM TRABAJADOR where user='"+user+"' and password= '"+password+"'");

    if(qry.exec()){
        int fieldNo = qry.record().indexOf("cedula");
        while (qry.next()) {
            QString cedula = qry.value(fieldNo).toString();
            if(cedula!=""){
                conClose();
                mainWindow->close();
                psicoUser->show();
            }
            else{
                conClose();
                mainWindow->close();
                secreUser->show();
            }
        }
     }
     else{
           QMessageBox message;
           message.setText("Invalid username or password");
           message.setWindowTitle("Error");
           message.exec();
     }
    }
    conClose();
}

void Admin::openPsico()
{
    if(mainWindow->isVisible()){
        mainWindow->hide();
        psicoUser->show();
    }
    if(superUser->isVisible()){
        superUser->hide();
        psicoUser->show();
    }
    if(secreUser->isVisible()){
        secreUser->hide();
        psicoUser->show();
    }
}

void Admin::openSuper()
{
    if(mainWindow->isVisible()){
        mainWindow->hide();
        superUser->show();
    }
    if(psicoUser->isVisible()){
        psicoUser->hide();
        superUser->show();
    }
    if(secreUser->isVisible()){
        secreUser->hide();
        superUser->show();
    }
}

void Admin::openSecre()
{
    if(mainWindow->isVisible()){
        mainWindow->hide();
        secreUser->show();
    }
    if(superUser->isVisible()){
        superUser->hide();
        secreUser->show();
    }
    if(psicoUser->isVisible()){
        psicoUser->hide();
        secreUser->show();
    }
}
