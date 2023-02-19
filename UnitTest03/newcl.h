#ifndef NEWCL_H
#define NEWCL_H

#include <QObject>
#include <QtTest>
#include <QtTest/QtTest>
class NewCL : public QObject
{
    Q_OBJECT
public:
    explicit NewCL(QObject *parent = nullptr);
   void SetAge(int age);
signals:
private slots:
   void testFail();
   void testAge();
   void testWidget();
private:
   int m_age;
};

#endif // NEWCL_H
