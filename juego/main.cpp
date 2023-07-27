#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
//hacemos las clases que vamos a necesitar, una sera la clase juego, otra la clase serie y las demas seran las series, que seran hijas de la clase padre
