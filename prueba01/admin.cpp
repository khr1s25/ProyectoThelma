#include "admin.h"

Admin::Admin(QObject *parent) : QObject(parent)
{
    mainWindow = new MainWindow();
    superUser = new MenuSuper();
    controller = new Control();
    secreUser = new MenuSecre();
    invesUser = new MenuInvestigador();

    QObject::connect(mainWindow,SIGNAL(loginValidation(QString,QString)),this,SL OT(log(QString,QString)));
    QObject::connect(controller,SIGNAL(abrirSuperMenu()),this,SLOT(openSuper()));
    QObject::connect(controller,SIGNAL(abrirPsicoMenu()),this,SLOT(openInves()));
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
                invesUser->show();
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

void Admin::openInves()
{
    if(mainWindow->isVisible()){
        mainWindow->hide();
        invesUser->show();
    }
    if(superUser->isVisible()){
        superUser->hide();
        invesUser->show();
    }
    if(secreUser->isVisible()){
        secreUser->hide();
        invesUser->show();
    }
}

void Admin::openSuper()
{
    if(mainWindow->isVisible()){
        mainWindow->hide();
        superUser->show();
    }
    if(invesUser->isVisible()){
        invesUser->hide();
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
    if(invesUser->isVisible()){
        invesUser->hide();
        secreUser->show();
    }
}
