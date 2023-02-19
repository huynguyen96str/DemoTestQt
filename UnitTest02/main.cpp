#include "widget.h"

#include <QApplication>
#include <QtTest>
#include "dog.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dog dog;
    QTest::qExec(&dog);
    return a.exec();
}
