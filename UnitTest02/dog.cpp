#include "dog.h"

Dog::Dog(QObject *parent) : QObject(parent)
{

}

void Dog::initTestCase()
{
    qDebug() << "initTestCase";
}

void Dog::test01()
{
    qDebug() << "test01";
}

void Dog::init()
{
     qDebug() << "init";
}

void Dog::cleanup()
{
    qDebug() << "cleanup";
}

void Dog::cleanupTestCase()
{
     qDebug() << "cleanupTestCase";
}

void Dog::bank()
{
      qDebug() << "bank";
}
