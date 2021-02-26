#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStyle>
#include <ui_mainwindow.h>

class MainWindow : public QMainWindow,public Ui::MainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
private slots:
    void on_tabWidget_currentChanged(int index);

private:
};
#endif // MAINWINDOW_H
