#include "widget.h"

#include <QApplication>
#include <QtTest>
#include "newcl.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NewCL newcl;
    newcl.SetAge(20);
    QTest::qExec(&newcl);
    return a.exec();
}
