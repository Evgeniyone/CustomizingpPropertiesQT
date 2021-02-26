#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setupUi(this);
    pushButton->setProperty("pagematches",true);

}


void MainWindow::on_tabWidget_currentChanged(int index)
{
    pushButton->setProperty("pagematches", false);
    pushButton_2->setProperty("pagematches", false);
    pushButton_3->setProperty("pagematches", false);
    // Set one of the buttons to true
    if (index == 0)
        pushButton->setProperty("pagematches", true);
    else if (index == 1)
        pushButton_2->setProperty("pagematches", true);
    else
        pushButton_3->setProperty("pagematches", true);

    pushButton->style()->polish(pushButton);
    pushButton_2->style()->polish(pushButton_2);
    pushButton_3->style()->polish(pushButton_3);
}

