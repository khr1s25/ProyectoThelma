#ifndef CONTROL_H
#define CONTROL_H

#include <QWidget>

namespace Ui {
class Control;
}

class Control : public QWidget
{
    Q_OBJECT

public:
    explicit Control(QWidget *parent = nullptr);
    ~Control();

signals:
    void abrirSuperMenu();
    void abrirSecreMenu();
    void abrirInvesMenu();

private slots:
    void on_superMenu_clicked();

    void on_secreMenu_clicked();

    void on_invesMenu_clicked();

private:
    Ui::Control *ui;
};

#endif // CONTROL_H
