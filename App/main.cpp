#include "mainwindow.h"
#include "langage.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Langage l;
    MainWindow w;
    w.show();
    a.exec();
    return 0;
}
