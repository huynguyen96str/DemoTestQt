#include "widget.h"
#include <QVBoxLayout>
#include <QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout  *lo = new QVBoxLayout();
    QPushButton* btn1= new QPushButton(tr("New File"));
    QPushButton* btn2= new QPushButton(tr("Update File"));
    lo->addWidget(btn1);
        lo->addWidget(btn2);
    lo->addStretch();
    this->setLayout(lo);
}

Widget::~Widget()
{
}

