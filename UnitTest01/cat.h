#ifndef CAT_H
#define CAT_H

#include <QObject>
#include <QtTest/QtTest>
#include <QTest>

class Cat : public QObject
{
    Q_OBJECT
public:
    explicit Cat(QObject *parent = nullptr);

signals:
public slots:
    void testPublicSlot();
private slots:
    void tesPrivateSlot();
    void testPrivateSlot2(QString value);
};

#endif // CAT_H
