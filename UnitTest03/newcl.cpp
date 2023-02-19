#include "newcl.h"

NewCL::NewCL(QObject *parent) : QObject(parent)
{
  m_age=0;
}

void NewCL::SetAge(int age)
{
m_age =age;
}

void NewCL::testFail()
{
    QFAIL("NO REASON JUST FAIL");
}

void NewCL::testAge()
{
  if(!m_age) QFAIL("Age is not set");
}

void NewCL::testWidget()
{
   int age =45;
   // make sure the age is valid
   QVERIFY(age>0 && age<100);

   // Issuse warning
   if(age >40) QWARN("Age is over 40!");
   if(age<21) QFAIL("Must be an adult");
   // make sure they are the same
   QCOMPARE(age,m_age);

}
