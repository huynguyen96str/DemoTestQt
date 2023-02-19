#ifndef WIDGET_H
#define WIDGET_H

#include <QObject>
#include <QTest>
class Widget : public QObject
{
    Q_OBJECT

public:
    Widget(QObject *parent = nullptr);
    ~Widget();
private slots:
    void test();
    void test_data();
    void testFail();
};
#endif // WIDGET_H
