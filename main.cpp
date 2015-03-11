#include "testplatform.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TestPlatform w;
    w.show();

    return a.exec();
}
