/********************************************************************************
** Form generated from reading UI file 'menusuper.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUSUPER_H
#define UI_MENUSUPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuSuper
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *creaUsuario;
    QGridLayout *gridLayout_2;
    QLineEdit *nombre;
    QLineEdit *usuario;
    QLineEdit *cedula;
    QPushButton *pushButton;
    QLineEdit *telefono;
    QLabel *mailLabel;
    QRadioButton *radioCedula;
    QLabel *cedulaLabel;
    QLabel *nameLabel;
    QLabel *userLabel;
    QLineEdit *email;
    QLabel *apLabel;
    QLabel *telLabel;
    QLabel *contraLabel;
    QSpacerItem *horizontalSpacer;
    QLineEdit *apellidos;
    QLineEdit *password;
    QWidget *modificaUsuario;
    QGridLayout *gridLayout_3;
    QWidget *widget;
    QGridLayout *gridLayout_4;
    QSpacerItem *verticalSpacer_2;
    QLabel *mUsuario;
    QLineEdit *mUserLineE;
    QSpacerItem *verticalSpacer;
    QPushButton *mBuscarPB;
    QWidget *widget_2;
    QFormLayout *formLayout;
    QLabel *userLabel_2;
    QLineEdit *usuario_2;
    QLabel *contraLabel_2;
    QLineEdit *password_2;
    QLabel *nameLabel_2;
    QLineEdit *nombre_2;
    QLabel *apLabel_2;
    QLineEdit *apellidos_2;
    QLabel *telLabel_2;
    QLineEdit *telefono_2;
    QLabel *mailLabel_2;
    QLineEdit *email_2;
    QLabel *cedulaLabel_2;
    QLineEdit *cedula_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QCheckBox *radioUsuario;
    QCheckBox *radioPassword;
    QCheckBox *radioNombre;
    QCheckBox *radioApellidos;
    QCheckBox *radioPhone;
    QCheckBox *radioEMail;
    QCheckBox *radioCedula_2;
    QPushButton *pushButton_2;
    QWidget *eliminaUsuario;
    QGridLayout *gridLayout_5;
    QSpacerItem *verticalSpacer_5;
    QLineEdit *eUser;
    QPushButton *eUserPB;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *horizontalSpacer_2;
    QLabel *eUserLabel;
    QSpacerItem *horizontalSpacer_3;
    QWidget *buscaUsuario;
    QGridLayout *gridLayout_6;
    QPushButton *mostrar;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MenuSuper)
    {
        if (MenuSuper->objectName().isEmpty())
            MenuSuper->setObjectName(QString::fromUtf8("MenuSuper"));
        MenuSuper->resize(800, 600);
        centralwidget = new QWidget(MenuSuper);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        creaUsuario = new QWidget();
        creaUsuario->setObjectName(QString::fromUtf8("creaUsuario"));
        gridLayout_2 = new QGridLayout(creaUsuario);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        nombre = new QLineEdit(creaUsuario);
        nombre->setObjectName(QString::fromUtf8("nombre"));

        gridLayout_2->addWidget(nombre, 5, 3, 1, 1);

        usuario = new QLineEdit(creaUsuario);
        usuario->setObjectName(QString::fromUtf8("usuario"));

        gridLayout_2->addWidget(usuario, 3, 3, 1, 1);

        cedula = new QLineEdit(creaUsuario);
        cedula->setObjectName(QString::fromUtf8("cedula"));
        cedula->setEnabled(false);

        gridLayout_2->addWidget(cedula, 9, 3, 1, 1);

        pushButton = new QPushButton(creaUsuario);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(85, 16777215));

        gridLayout_2->addWidget(pushButton, 10, 3, 1, 1);

        telefono = new QLineEdit(creaUsuario);
        telefono->setObjectName(QString::fromUtf8("telefono"));

        gridLayout_2->addWidget(telefono, 7, 3, 1, 1);

        mailLabel = new QLabel(creaUsuario);
        mailLabel->setObjectName(QString::fromUtf8("mailLabel"));

        gridLayout_2->addWidget(mailLabel, 8, 0, 1, 1);

        radioCedula = new QRadioButton(creaUsuario);
        radioCedula->setObjectName(QString::fromUtf8("radioCedula"));

        gridLayout_2->addWidget(radioCedula, 9, 1, 1, 1);

        cedulaLabel = new QLabel(creaUsuario);
        cedulaLabel->setObjectName(QString::fromUtf8("cedulaLabel"));

        gridLayout_2->addWidget(cedulaLabel, 9, 0, 1, 1);

        nameLabel = new QLabel(creaUsuario);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        gridLayout_2->addWidget(nameLabel, 5, 0, 1, 1);

        userLabel = new QLabel(creaUsuario);
        userLabel->setObjectName(QString::fromUtf8("userLabel"));

        gridLayout_2->addWidget(userLabel, 3, 0, 1, 1);

        email = new QLineEdit(creaUsuario);
        email->setObjectName(QString::fromUtf8("email"));

        gridLayout_2->addWidget(email, 8, 3, 1, 1);

        apLabel = new QLabel(creaUsuario);
        apLabel->setObjectName(QString::fromUtf8("apLabel"));

        gridLayout_2->addWidget(apLabel, 6, 0, 1, 1);

        telLabel = new QLabel(creaUsuario);
        telLabel->setObjectName(QString::fromUtf8("telLabel"));

        gridLayout_2->addWidget(telLabel, 7, 0, 1, 1);

        contraLabel = new QLabel(creaUsuario);
        contraLabel->setObjectName(QString::fromUtf8("contraLabel"));

        gridLayout_2->addWidget(contraLabel, 4, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 4, 4, 1, 1);

        apellidos = new QLineEdit(creaUsuario);
        apellidos->setObjectName(QString::fromUtf8("apellidos"));

        gridLayout_2->addWidget(apellidos, 6, 3, 1, 1);

        password = new QLineEdit(creaUsuario);
        password->setObjectName(QString::fromUtf8("password"));

        gridLayout_2->addWidget(password, 4, 3, 1, 1);

        tabWidget->addTab(creaUsuario, QString());
        modificaUsuario = new QWidget();
        modificaUsuario->setObjectName(QString::fromUtf8("modificaUsuario"));
        gridLayout_3 = new QGridLayout(modificaUsuario);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        widget = new QWidget(modificaUsuario);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        gridLayout_4 = new QGridLayout(widget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 0, 0, 1, 1);

        mUsuario = new QLabel(widget);
        mUsuario->setObjectName(QString::fromUtf8("mUsuario"));

        gridLayout_4->addWidget(mUsuario, 1, 0, 1, 1);

        mUserLineE = new QLineEdit(widget);
        mUserLineE->setObjectName(QString::fromUtf8("mUserLineE"));

        gridLayout_4->addWidget(mUserLineE, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 4, 0, 1, 1);

        mBuscarPB = new QPushButton(widget);
        mBuscarPB->setObjectName(QString::fromUtf8("mBuscarPB"));
        mBuscarPB->setMaximumSize(QSize(85, 16777215));

        gridLayout_4->addWidget(mBuscarPB, 2, 1, 1, 1);


        gridLayout_3->addWidget(widget, 0, 0, 1, 1);

        widget_2 = new QWidget(modificaUsuario);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        formLayout = new QFormLayout(widget_2);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        userLabel_2 = new QLabel(widget_2);
        userLabel_2->setObjectName(QString::fromUtf8("userLabel_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, userLabel_2);

        usuario_2 = new QLineEdit(widget_2);
        usuario_2->setObjectName(QString::fromUtf8("usuario_2"));
        usuario_2->setEnabled(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, usuario_2);

        contraLabel_2 = new QLabel(widget_2);
        contraLabel_2->setObjectName(QString::fromUtf8("contraLabel_2"));

        formLayout->setWidget(3, QFormLayout::LabelRole, contraLabel_2);

        password_2 = new QLineEdit(widget_2);
        password_2->setObjectName(QString::fromUtf8("password_2"));
        password_2->setEnabled(false);

        formLayout->setWidget(4, QFormLayout::FieldRole, password_2);

        nameLabel_2 = new QLabel(widget_2);
        nameLabel_2->setObjectName(QString::fromUtf8("nameLabel_2"));

        formLayout->setWidget(5, QFormLayout::LabelRole, nameLabel_2);

        nombre_2 = new QLineEdit(widget_2);
        nombre_2->setObjectName(QString::fromUtf8("nombre_2"));
        nombre_2->setEnabled(false);

        formLayout->setWidget(6, QFormLayout::FieldRole, nombre_2);

        apLabel_2 = new QLabel(widget_2);
        apLabel_2->setObjectName(QString::fromUtf8("apLabel_2"));

        formLayout->setWidget(7, QFormLayout::LabelRole, apLabel_2);

        apellidos_2 = new QLineEdit(widget_2);
        apellidos_2->setObjectName(QString::fromUtf8("apellidos_2"));
        apellidos_2->setEnabled(false);

        formLayout->setWidget(8, QFormLayout::FieldRole, apellidos_2);

        telLabel_2 = new QLabel(widget_2);
        telLabel_2->setObjectName(QString::fromUtf8("telLabel_2"));

        formLayout->setWidget(9, QFormLayout::LabelRole, telLabel_2);

        telefono_2 = new QLineEdit(widget_2);
        telefono_2->setObjectName(QString::fromUtf8("telefono_2"));
        telefono_2->setEnabled(false);

        formLayout->setWidget(10, QFormLayout::FieldRole, telefono_2);

        mailLabel_2 = new QLabel(widget_2);
        mailLabel_2->setObjectName(QString::fromUtf8("mailLabel_2"));

        formLayout->setWidget(11, QFormLayout::LabelRole, mailLabel_2);

        email_2 = new QLineEdit(widget_2);
        email_2->setObjectName(QString::fromUtf8("email_2"));
        email_2->setEnabled(false);

        formLayout->setWidget(12, QFormLayout::FieldRole, email_2);

        cedulaLabel_2 = new QLabel(widget_2);
        cedulaLabel_2->setObjectName(QString::fromUtf8("cedulaLabel_2"));

        formLayout->setWidget(13, QFormLayout::LabelRole, cedulaLabel_2);

        cedula_2 = new QLineEdit(widget_2);
        cedula_2->setObjectName(QString::fromUtf8("cedula_2"));
        cedula_2->setEnabled(false);

        formLayout->setWidget(14, QFormLayout::FieldRole, cedula_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(0, QFormLayout::LabelRole, verticalSpacer_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(15, QFormLayout::LabelRole, verticalSpacer_4);

        radioUsuario = new QCheckBox(widget_2);
        radioUsuario->setObjectName(QString::fromUtf8("radioUsuario"));

        formLayout->setWidget(2, QFormLayout::LabelRole, radioUsuario);

        radioPassword = new QCheckBox(widget_2);
        radioPassword->setObjectName(QString::fromUtf8("radioPassword"));

        formLayout->setWidget(4, QFormLayout::LabelRole, radioPassword);

        radioNombre = new QCheckBox(widget_2);
        radioNombre->setObjectName(QString::fromUtf8("radioNombre"));

        formLayout->setWidget(6, QFormLayout::LabelRole, radioNombre);

        radioApellidos = new QCheckBox(widget_2);
        radioApellidos->setObjectName(QString::fromUtf8("radioApellidos"));

        formLayout->setWidget(8, QFormLayout::LabelRole, radioApellidos);

        radioPhone = new QCheckBox(widget_2);
        radioPhone->setObjectName(QString::fromUtf8("radioPhone"));

        formLayout->setWidget(10, QFormLayout::LabelRole, radioPhone);

        radioEMail = new QCheckBox(widget_2);
        radioEMail->setObjectName(QString::fromUtf8("radioEMail"));

        formLayout->setWidget(12, QFormLayout::LabelRole, radioEMail);

        radioCedula_2 = new QCheckBox(widget_2);
        radioCedula_2->setObjectName(QString::fromUtf8("radioCedula_2"));

        formLayout->setWidget(14, QFormLayout::LabelRole, radioCedula_2);

        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        formLayout->setWidget(16, QFormLayout::LabelRole, pushButton_2);


        gridLayout_3->addWidget(widget_2, 0, 1, 1, 1);

        tabWidget->addTab(modificaUsuario, QString());
        eliminaUsuario = new QWidget();
        eliminaUsuario->setObjectName(QString::fromUtf8("eliminaUsuario"));
        gridLayout_5 = new QGridLayout(eliminaUsuario);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_5, 0, 1, 1, 1);

        eUser = new QLineEdit(eliminaUsuario);
        eUser->setObjectName(QString::fromUtf8("eUser"));

        gridLayout_5->addWidget(eUser, 2, 1, 1, 1);

        eUserPB = new QPushButton(eliminaUsuario);
        eUserPB->setObjectName(QString::fromUtf8("eUserPB"));
        eUserPB->setMaximumSize(QSize(80, 16777215));

        gridLayout_5->addWidget(eUserPB, 3, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_6, 4, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 3, 0, 1, 1);

        eUserLabel = new QLabel(eliminaUsuario);
        eUserLabel->setObjectName(QString::fromUtf8("eUserLabel"));
        eUserLabel->setMaximumSize(QSize(80, 80));

        gridLayout_5->addWidget(eUserLabel, 1, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 2, 2, 1, 1);

        tabWidget->addTab(eliminaUsuario, QString());
        buscaUsuario = new QWidget();
        buscaUsuario->setObjectName(QString::fromUtf8("buscaUsuario"));
        gridLayout_6 = new QGridLayout(buscaUsuario);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        mostrar = new QPushButton(buscaUsuario);
        mostrar->setObjectName(QString::fromUtf8("mostrar"));
        mostrar->setMaximumSize(QSize(80, 16777215));

        gridLayout_6->addWidget(mostrar, 1, 0, 1, 1);

        tableView = new QTableView(buscaUsuario);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout_6->addWidget(tableView, 0, 0, 1, 1);

        tabWidget->addTab(buscaUsuario, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MenuSuper->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MenuSuper);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        MenuSuper->setMenuBar(menubar);
        statusbar = new QStatusBar(MenuSuper);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MenuSuper->setStatusBar(statusbar);
#if QT_CONFIG(shortcut)
        mailLabel->setBuddy(email);
        nameLabel->setBuddy(nombre);
        userLabel->setBuddy(usuario);
        apLabel->setBuddy(apellidos);
        telLabel->setBuddy(telefono);
        contraLabel->setBuddy(password);
        mUsuario->setBuddy(mUserLineE);
        userLabel_2->setBuddy(usuario);
        contraLabel_2->setBuddy(password);
        nameLabel_2->setBuddy(nombre);
        apLabel_2->setBuddy(apellidos);
        telLabel_2->setBuddy(telefono);
        mailLabel_2->setBuddy(email);
        eUserLabel->setBuddy(eUser);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(tabWidget, usuario);
        QWidget::setTabOrder(usuario, password);
        QWidget::setTabOrder(password, nombre);
        QWidget::setTabOrder(nombre, apellidos);
        QWidget::setTabOrder(apellidos, telefono);
        QWidget::setTabOrder(telefono, email);
        QWidget::setTabOrder(email, radioCedula);
        QWidget::setTabOrder(radioCedula, cedula);
        QWidget::setTabOrder(cedula, mUserLineE);
        QWidget::setTabOrder(mUserLineE, mBuscarPB);
        QWidget::setTabOrder(mBuscarPB, radioUsuario);
        QWidget::setTabOrder(radioUsuario, usuario_2);
        QWidget::setTabOrder(usuario_2, radioPassword);
        QWidget::setTabOrder(radioPassword, password_2);
        QWidget::setTabOrder(password_2, radioNombre);
        QWidget::setTabOrder(radioNombre, nombre_2);
        QWidget::setTabOrder(nombre_2, radioApellidos);
        QWidget::setTabOrder(radioApellidos, apellidos_2);
        QWidget::setTabOrder(apellidos_2, radioPhone);
        QWidget::setTabOrder(radioPhone, telefono_2);
        QWidget::setTabOrder(telefono_2, radioEMail);
        QWidget::setTabOrder(radioEMail, email_2);
        QWidget::setTabOrder(email_2, radioCedula_2);
        QWidget::setTabOrder(radioCedula_2, cedula_2);

        retranslateUi(MenuSuper);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MenuSuper);
    } // setupUi

    void retranslateUi(QMainWindow *MenuSuper)
    {
        MenuSuper->setWindowTitle(QCoreApplication::translate("MenuSuper", "Boss", nullptr));
        pushButton->setText(QCoreApplication::translate("MenuSuper", "Crear", nullptr));
        mailLabel->setText(QCoreApplication::translate("MenuSuper", "eMail", nullptr));
        radioCedula->setText(QString());
        cedulaLabel->setText(QCoreApplication::translate("MenuSuper", "Codigo", nullptr));
        nameLabel->setText(QCoreApplication::translate("MenuSuper", "Nombre", nullptr));
        userLabel->setText(QCoreApplication::translate("MenuSuper", "Usuario", nullptr));
        apLabel->setText(QCoreApplication::translate("MenuSuper", "Apellidos", nullptr));
        telLabel->setText(QCoreApplication::translate("MenuSuper", "Telefono", nullptr));
        contraLabel->setText(QCoreApplication::translate("MenuSuper", "Contrase\303\261a", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(creaUsuario), QCoreApplication::translate("MenuSuper", "Crear", nullptr));
        mUsuario->setText(QCoreApplication::translate("MenuSuper", "Usuario:", nullptr));
        mBuscarPB->setText(QCoreApplication::translate("MenuSuper", "Buscar", nullptr));
        userLabel_2->setText(QCoreApplication::translate("MenuSuper", "Usuario", nullptr));
        contraLabel_2->setText(QCoreApplication::translate("MenuSuper", "Contrase\303\261a", nullptr));
        nameLabel_2->setText(QCoreApplication::translate("MenuSuper", "Nombre", nullptr));
        apLabel_2->setText(QCoreApplication::translate("MenuSuper", "Apellidos", nullptr));
        telLabel_2->setText(QCoreApplication::translate("MenuSuper", "Telefono", nullptr));
        mailLabel_2->setText(QCoreApplication::translate("MenuSuper", "eMail", nullptr));
        cedulaLabel_2->setText(QCoreApplication::translate("MenuSuper", "Cedula", nullptr));
        radioUsuario->setText(QString());
        radioPassword->setText(QString());
        radioNombre->setText(QString());
        radioApellidos->setText(QString());
        radioPhone->setText(QString());
        radioEMail->setText(QString());
        radioCedula_2->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("MenuSuper", "Guardar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(modificaUsuario), QCoreApplication::translate("MenuSuper", "Modificar", nullptr));
        eUserPB->setText(QCoreApplication::translate("MenuSuper", "Eliminar", nullptr));
        eUserLabel->setText(QCoreApplication::translate("MenuSuper", "Usuario", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(eliminaUsuario), QCoreApplication::translate("MenuSuper", "Eliminar", nullptr));
        mostrar->setText(QCoreApplication::translate("MenuSuper", "Mostrar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(buscaUsuario), QCoreApplication::translate("MenuSuper", "Mostrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuSuper: public Ui_MenuSuper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUSUPER_H
