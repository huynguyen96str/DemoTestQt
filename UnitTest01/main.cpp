#include "widget.h"

#include <QApplication>
#include <QtTest>
#include "cat.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Cat cat;
    QTest::qExec(&cat);
    return a.exec();
}
