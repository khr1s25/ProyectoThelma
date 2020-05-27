/********************************************************************************
** Form generated from reading UI file 'control.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROL_H
#define UI_CONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Control
{
public:
    QGridLayout *gridLayout;
    QPushButton *superMenu;
    QPushButton *invesMenu;
    QPushButton *secreMenu;

    void setupUi(QWidget *Control)
    {
        if (Control->objectName().isEmpty())
            Control->setObjectName(QString::fromUtf8("Control"));
        Control->resize(222, 400);
        Control->setMinimumSize(QSize(222, 400));
        Control->setMaximumSize(QSize(222, 400));
        gridLayout = new QGridLayout(Control);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        superMenu = new QPushButton(Control);
        superMenu->setObjectName(QString::fromUtf8("superMenu"));
        superMenu->setMinimumSize(QSize(0, 122));

        gridLayout->addWidget(superMenu, 0, 0, 1, 1);

        invesMenu = new QPushButton(Control);
        invesMenu->setObjectName(QString::fromUtf8("invesMenu"));
        invesMenu->setMinimumSize(QSize(0, 122));

        gridLayout->addWidget(invesMenu, 1, 0, 1, 1);

        secreMenu = new QPushButton(Control);
        secreMenu->setObjectName(QString::fromUtf8("secreMenu"));
        secreMenu->setMinimumSize(QSize(0, 122));

        gridLayout->addWidget(secreMenu, 2, 0, 1, 1);


        retranslateUi(Control);

        QMetaObject::connectSlotsByName(Control);
    } // setupUi

    void retranslateUi(QWidget *Control)
    {
        Control->setWindowTitle(QCoreApplication::translate("Control", "Controlador", nullptr));
        superMenu->setText(QCoreApplication::translate("Control", "SUPER", nullptr));
        invesMenu->setText(QCoreApplication::translate("Control", "INVESTIGADOR", nullptr));
        secreMenu->setText(QCoreApplication::translate("Control", "SECRETARIA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Control: public Ui_Control {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROL_H
