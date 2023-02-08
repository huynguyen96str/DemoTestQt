#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    tabWidget = new QTabWidget(this);
        // Add tabs
        tabWidget->addTab(new QWidget(this), "Tab 1");
        tabWidget->addTab(new QWidget(this), "Tab 2");
        tabWidget->addTab(new QWidget(this), "Tab 3");

        setCentralWidget(tabWidget);
}

MainWindow::~MainWindow()
{
}


void MainWindow::addTab()
{
    // Create a new tab with a label
           int index = tabWidget->count();
           QLabel *label = new QLabel(QString("Tab %1").arg(index + 1));
           tabWidget->addTab(label, QString("Tab %1").arg(index + 1));
}

void MainWindow::deleteTab()
{
    // Delete the current tab
          int index = tabWidget->currentIndex();
          if (index >= 0) {
              tabWidget->removeTab(index);
          }
}

