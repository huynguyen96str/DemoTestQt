#include "frm.h"


Frm::Frm(MainWindow *mainWindow, QWidget  *parent)
    :QWidget(parent), m_mainWindow(mainWindow)
{

    // Create buttons and connect their clicked signals to main window's slots
           QPushButton *addButton = new QPushButton("Add Tab", this);
           connect(addButton, &QPushButton::clicked, m_mainWindow, &MainWindow::addTab);

           QPushButton *deleteButton = new QPushButton("Delete Tab", this);
           connect(deleteButton, &QPushButton::clicked, m_mainWindow, &MainWindow::deleteTab);

           // Arrange buttons in a layout
           QHBoxLayout *layout = new QHBoxLayout(this);
           layout->addWidget(addButton);
           layout->addWidget(deleteButton);
}
