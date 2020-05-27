/********************************************************************************
** Form generated from reading UI file 'menusecre.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUSECRE_H
#define UI_MENUSECRE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuSecre
{
public:
    QWidget *centralwidget;
    QFormLayout *formLayout;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QPushButton *Mostrar;
    QTableView *tableView;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *archivo;
    QPushButton *descargaArchvio;
    QSpacerItem *verticalSpacer_2;
    QRadioButton *aceptado;
    QRadioButton *denegado;
    QPushButton *enviarRevision;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MenuSecre)
    {
        if (MenuSecre->objectName().isEmpty())
            MenuSecre->setObjectName(QString::fromUtf8("MenuSecre"));
        MenuSecre->resize(800, 600);
        centralwidget = new QWidget(MenuSecre);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        formLayout = new QFormLayout(centralwidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Mostrar = new QPushButton(widget_2);
        Mostrar->setObjectName(QString::fromUtf8("Mostrar"));
        Mostrar->setMaximumSize(QSize(209, 16777215));

        gridLayout_2->addWidget(Mostrar, 4, 1, 1, 1);

        tableView = new QTableView(widget_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setMinimumSize(QSize(418, 0));

        gridLayout_2->addWidget(tableView, 0, 1, 1, 2);


        gridLayout_3->addWidget(widget_2, 0, 0, 1, 1);


        formLayout->setWidget(0, QFormLayout::LabelRole, widget);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        archivo = new QLineEdit(widget_3);
        archivo->setObjectName(QString::fromUtf8("archivo"));
        archivo->setEnabled(true);
        archivo->setMaximumSize(QSize(300, 16777215));
        archivo->setLayoutDirection(Qt::LeftToRight);
        archivo->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(archivo);

        descargaArchvio = new QPushButton(widget_3);
        descargaArchvio->setObjectName(QString::fromUtf8("descargaArchvio"));
        descargaArchvio->setMaximumSize(QSize(209, 16777215));

        verticalLayout->addWidget(descargaArchvio);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        aceptado = new QRadioButton(widget_3);
        aceptado->setObjectName(QString::fromUtf8("aceptado"));

        verticalLayout->addWidget(aceptado);

        denegado = new QRadioButton(widget_3);
        denegado->setObjectName(QString::fromUtf8("denegado"));

        verticalLayout->addWidget(denegado);

        enviarRevision = new QPushButton(widget_3);
        enviarRevision->setObjectName(QString::fromUtf8("enviarRevision"));
        enviarRevision->setEnabled(false);
        enviarRevision->setMaximumSize(QSize(209, 16777215));

        verticalLayout->addWidget(enviarRevision);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        formLayout->setWidget(0, QFormLayout::FieldRole, widget_3);

        MenuSecre->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MenuSecre);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        MenuSecre->setMenuBar(menubar);
        statusbar = new QStatusBar(MenuSecre);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MenuSecre->setStatusBar(statusbar);

        retranslateUi(MenuSecre);

        QMetaObject::connectSlotsByName(MenuSecre);
    } // setupUi

    void retranslateUi(QMainWindow *MenuSecre)
    {
        MenuSecre->setWindowTitle(QCoreApplication::translate("MenuSecre", "Secretaria", nullptr));
        Mostrar->setText(QCoreApplication::translate("MenuSecre", "Mostrar", nullptr));
        archivo->setText(QString());
        archivo->setPlaceholderText(QCoreApplication::translate("MenuSecre", "Archivo", nullptr));
        descargaArchvio->setText(QCoreApplication::translate("MenuSecre", "Descargar", nullptr));
        aceptado->setText(QCoreApplication::translate("MenuSecre", "Aceptado", nullptr));
        denegado->setText(QCoreApplication::translate("MenuSecre", "Denegado", nullptr));
        enviarRevision->setText(QCoreApplication::translate("MenuSecre", "Enviar revision", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuSecre: public Ui_MenuSecre {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUSECRE_H
