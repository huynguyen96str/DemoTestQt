#include "mainwindow.h"

#include <QApplication>
#include "frm.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow mainWindow;
    mainWindow.show();

    Frm form(&mainWindow);
    form.show();

    return a.exec();
}
