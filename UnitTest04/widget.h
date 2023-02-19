#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtTest>

class Widget : public QObject
{
    Q_OBJECT

public:
    Widget(QObject *parent = nullptr);
    ~Widget();
private slots:
    void testAge_data();
    void testAge();
};
#endif // WIDGET_H
