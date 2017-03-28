#include "mergerwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MergerWindow w;
    w.show();

    return a.exec();
}
