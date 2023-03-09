#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QtCore>
#include <QtGui>
#include <QPushButton>
#include <QGridLayout>
#include <QTextBlock>
#include <QLineEdit>
#include <QLabel>
#include "grid.h"

class MainWindow : public QMainWindow
{
Q_OBJECT
public:
    MainWindow();
    FormGrid *grid;

public slots:
    void text();
    void clean();

private:
    QPushButton *b1;
    QPushButton *b2;
    QLineEdit *inp;
    QLabel *out;
};
#endif // MAINWINDOW_H
