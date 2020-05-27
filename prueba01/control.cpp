#include "control.h"
#include "ui_control.h"

Control::Control(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Control)
{
    ui->setupUi(this);
}

Control::~Control()
{
    delete ui;
}

void Control::on_superMenu_clicked()
{
    emit abrirSuperMenu();
}

void Control::on_secreMenu_clicked()
{
    emit abrirSecreMenu();
}

void Control::on_invesMenu_clicked()
{
    emit abrirInvesMenu();
}
