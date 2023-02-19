#include "widget.h"

Widget::Widget(QObject *parent)
    : QObject(parent)
{
}

Widget::~Widget()
{
}

void Widget::test()
{
    QFETCH(int,value);
    // skip 5
    if(value ==5) QSKIP("Skipping 5");

    //Exits
    qInfo() << "Testing: " << value;
}

void Widget::test_data()
{
    qInfo() << "Generating data ....";
    QTest::addColumn<int>("value");

    for(int i=0; i<10; i++){
        QString name = QString::number(i);
        QByteArray ba = name.toLatin1();
        const char* c_tr = ba.data();
        QTest::newRow(c_tr) <<i;
    }
}

void Widget::testFail()
{
    int current =6;
    int supported =6;
    QCOMPARE(current,supported);

    // test previus
    QEXPECT_FAIL("","Version 5 is not supported",Continue);
    QCOMPARE(current,5) ; // will fail(test thu co|khong co dong nay)
}

