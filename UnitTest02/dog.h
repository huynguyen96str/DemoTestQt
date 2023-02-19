#ifndef DOG_H
#define DOG_H

#include <QObject>
#include <QDebug>
class Dog : public QObject
{
    Q_OBJECT
public:
    explicit Dog(QObject *parent = nullptr);

signals:
private slots:
    void initTestCase(); // [Phuong thuc mac dinh]chay dau tien
    void test01();
    void init();   //[Phuong thuc mac dinh] Sau khi chay initTestCase thi moi lan chay phuong thuc(khac phuong thuc mac dinh) thi chay vao day => nhieu lan chay
    void cleanup(); // [Phuong thuc mac dinh]Sau khi chay  chay phuong thuc(khac phuong thuc mac dinh) thi se chay vao day
    void cleanupTestCase(); //[Phuong thuc mac dinh] chay cuoi cung
    void bank();
};

#endif // DOG_H
