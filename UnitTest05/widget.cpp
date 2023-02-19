#include "widget.h"

Widget::Widget(QObject *parent)
    : QObject(parent)
{
}

Widget::~Widget()
{
}

void Widget::testFor()
{
   QVector<int> list;
   list.fill(0,100);
   QBENCHMARK{
       for(int i=0; i<list.size(); i++){
           // Do stuff
       }
   }
}

void Widget::testForEach()
{
    QVector<int> list;
    list.fill(0,100);
    QBENCHMARK{
        foreach(int value, list){
            // do stuff
        }
    }
}

void Widget::testString()
{
   QString him = "Bryan";
   QString her= "Tammy";
   QBENCHMARK{
       int ret = him.compare(her);
   }
}

void Widget::testCom()
{
    QString him = "Bryan";
    QString her= "Tammy";
    QBENCHMARK{
        QCOMPARE(him,her);
    }
}

