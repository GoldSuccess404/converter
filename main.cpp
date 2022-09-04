#include "converter_da.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    converter_da w;
    w.show();
    return a.exec();
}
