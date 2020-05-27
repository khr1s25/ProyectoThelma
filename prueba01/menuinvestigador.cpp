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

    model->setTable("documento");
    model->select();
    ui->mostrarTable->setModel(model);
    conClose();
    proyecto.close();
}

void MenuInvestigador::on_eTextPB_clicked()
{

}

void MenuInvestigador::on_mBuscarPB_clicked()
{

}


