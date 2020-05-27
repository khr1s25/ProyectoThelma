#include "admin.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Admin c;
    c.start();
    return a.exec();
}
