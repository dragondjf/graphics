#include "app/graphicsview.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GraphiceView w;
    w.show();

    return a.exec();
}
