#include "cat.h"

Cat::Cat(QObject *parent) : QObject(parent)
{

}

void Cat::testPublicSlot()
{
   qInfo() << "testPublicSlot";
}

void Cat::tesPrivateSlot()
{
 qInfo() << "tesPrivateSlot";
}

void Cat::testPrivateSlot2(QString value)
{
qInfo() << "testPrivateSlot2" << value;
}
