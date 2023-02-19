#ifndef WIDGET_H
#define WIDGET_H

#include <QObject>
#include <QVector>
#include <QtTest>
class Widget : public QObject
{
    Q_OBJECT

public:
    Widget(QObject *parent = nullptr);
    ~Widget();
private slots:
    void testFor();
    void testForEach();
    void testString();
    void testCom();
};
#endif // WIDGET_H
