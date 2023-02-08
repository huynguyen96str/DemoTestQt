#ifndef FRM_H
#define FRM_H

#include <QObject>
#include "mainwindow.h"

#include <QPushButton>
#include <QHBoxLayout>
class Frm : public QWidget
{
    Q_OBJECT
public:
    explicit Frm(MainWindow *mainWindow,QWidget  *parent = nullptr);

private:
    MainWindow *m_mainWindow;

};

#endif // FRM_H
