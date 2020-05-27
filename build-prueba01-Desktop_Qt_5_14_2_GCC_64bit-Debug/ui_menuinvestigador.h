/********************************************************************************
** Form generated from reading UI file 'menuinvestigador.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUINVESTIGADOR_H
#define UI_MENUINVESTIGADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuInvestigador
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *agregarArchivo;
    QGridLayout *gridLayout_2;
    QWidget *revision;
    QGridLayout *gridLayout_5;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QLabel *eTextLabel;
    QLineEdit *eText;
    QPushButton *eTextPB;
    QSpacerItem *verticalSpacer_4;
    QWidget *widget_2;
    QGridLayout *gridLayout_4;
    QLineEdit *mArchivoLineE;
    QPushButton *mBuscarPB;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLabel *Status;
    QLabel *mText;
    QWidget *listaArchivos;
    QGridLayout *gridLayout_6;
    QPushButton *mostrar;
    QTableView *mostrarTable;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MenuInvestigador)
    {
        if (MenuInvestigador->objectName().isEmpty())
            MenuInvestigador->setObjectName(QString::fromUtf8("MenuInvestigador"));
        MenuInvestigador->resize(800, 600);
        centralwidget = new QWidget(MenuInvestigador);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        agregarArchivo = new QWidget();
        agregarArchivo->setObjectName(QString::fromUtf8("agregarArchivo"));
        gridLayout_2 = new QGridLayout(agregarArchivo);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tabWidget->addTab(agregarArchivo, QString());
        revision = new QWidget();
        revision->setObjectName(QString::fromUtf8("revision"));
        gridLayout_5 = new QGridLayout(revision);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        widget = new QWidget(revision);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        eTextLabel = new QLabel(widget_3);
        eTextLabel->setObjectName(QString::fromUtf8("eTextLabel"));
        eTextLabel->setMaximumSize(QSize(80, 80));

        verticalLayout->addWidget(eTextLabel);

        eText = new QLineEdit(widget_3);
        eText->setObjectName(QString::fromUtf8("eText"));

        verticalLayout->addWidget(eText);

        eTextPB = new QPushButton(widget_3);
        eTextPB->setObjectName(QString::fromUtf8("eTextPB"));
        eTextPB->setMaximumSize(QSize(80, 16777215));

        verticalLayout->addWidget(eTextPB);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);


        gridLayout_3->addWidget(widget_3, 0, 0, 1, 1);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        gridLayout_4 = new QGridLayout(widget_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        mArchivoLineE = new QLineEdit(widget_2);
        mArchivoLineE->setObjectName(QString::fromUtf8("mArchivoLineE"));

        gridLayout_4->addWidget(mArchivoLineE, 2, 1, 1, 1);

        mBuscarPB = new QPushButton(widget_2);
        mBuscarPB->setObjectName(QString::fromUtf8("mBuscarPB"));
        mBuscarPB->setMaximumSize(QSize(85, 16777215));

        gridLayout_4->addWidget(mBuscarPB, 2, 2, 1, 1);

        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_4->addWidget(lineEdit, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 5, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 0, 1, 1, 1);

        Status = new QLabel(widget_2);
        Status->setObjectName(QString::fromUtf8("Status"));

        gridLayout_4->addWidget(Status, 3, 0, 1, 1);

        mText = new QLabel(widget_2);
        mText->setObjectName(QString::fromUtf8("mText"));

        gridLayout_4->addWidget(mText, 1, 1, 1, 1);


        gridLayout_3->addWidget(widget_2, 0, 1, 1, 1);


        gridLayout_5->addWidget(widget, 0, 1, 1, 1);

        tabWidget->addTab(revision, QString());
        listaArchivos = new QWidget();
        listaArchivos->setObjectName(QString::fromUtf8("listaArchivos"));
        gridLayout_6 = new QGridLayout(listaArchivos);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        mostrar = new QPushButton(listaArchivos);
        mostrar->setObjectName(QString::fromUtf8("mostrar"));
        mostrar->setMaximumSize(QSize(80, 16777215));

        gridLayout_6->addWidget(mostrar, 2, 0, 1, 1);

        mostrarTable = new QTableView(listaArchivos);
        mostrarTable->setObjectName(QString::fromUtf8("mostrarTable"));

        gridLayout_6->addWidget(mostrarTable, 1, 0, 1, 1);

        label = new QLabel(listaArchivos);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_6->addWidget(label, 0, 0, 1, 1);

        tabWidget->addTab(listaArchivos, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MenuInvestigador->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MenuInvestigador);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        MenuInvestigador->setMenuBar(menubar);
        statusbar = new QStatusBar(MenuInvestigador);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MenuInvestigador->setStatusBar(statusbar);
#if QT_CONFIG(shortcut)
        eTextLabel->setBuddy(eText);
        mText->setBuddy(mArchivoLineE);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(tabWidget, mostrar);
        QWidget::setTabOrder(mostrar, mostrarTable);

        retranslateUi(MenuInvestigador);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MenuInvestigador);
    } // setupUi

    void retranslateUi(QMainWindow *MenuInvestigador)
    {
        MenuInvestigador->setWindowTitle(QCoreApplication::translate("MenuInvestigador", "Investigador", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(agregarArchivo), QCoreApplication::translate("MenuInvestigador", "Crear", nullptr));
        eTextLabel->setText(QCoreApplication::translate("MenuInvestigador", "Archivo:", nullptr));
        eTextPB->setText(QCoreApplication::translate("MenuInvestigador", "Eliminar", nullptr));
        mBuscarPB->setText(QCoreApplication::translate("MenuInvestigador", "Buscar", nullptr));
        Status->setText(QCoreApplication::translate("MenuInvestigador", "Status:", nullptr));
        mText->setText(QCoreApplication::translate("MenuInvestigador", "Archivo:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(revision), QCoreApplication::translate("MenuInvestigador", "Eliminar", nullptr));
        mostrar->setText(QCoreApplication::translate("MenuInvestigador", "Mostrar", nullptr));
        label->setText(QCoreApplication::translate("MenuInvestigador", "Lista de Archivos:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(listaArchivos), QCoreApplication::translate("MenuInvestigador", "Mostrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuInvestigador: public Ui_MenuInvestigador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUINVESTIGADOR_H
