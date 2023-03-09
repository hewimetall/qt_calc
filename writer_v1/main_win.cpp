//
// Created by xx on 3/8/23.
//

#include "main_win.h"

extern "C" {
#include "c_libs/s21_calc.h"
#include "c_libs/stack_char.h"
}

MainWindow::MainWindow() {
    grid = new FormGrid;

    b1 = new QPushButton("=");
    b2 = new QPushButton("Clean");
    inp = new QLineEdit;
    out = new QLabel("Out:");
    grid->gridLayoutT->addWidget(b1);
    grid->gridLayoutT->addWidget(b2);
    grid->gridLayoutI->addWidget(inp);
    grid->gridLayoutI->addWidget(out);

    // Set layout in QWidget
    QWidget *window = new QWidget();
    window->setLayout(grid);
    // Set QWidget as the central layout of the main window
    setCentralWidget(window);
    setWindowTitle("Calm mini");
    setMaximumSize(25,25);

    connect(b1, SIGNAL(clicked()), this, SLOT(text()));
    connect(b2, SIGNAL(clicked()), this, SLOT(clean()));
}

void MainWindow::text() {
    auto q = inp->text();

    if(s21_valid(q.toLocal8Bit().data()) == TRUE) {
        q.fromStdString(s21_call(q.toLocal8Bit().data()));
        out->setText(q);
    }
    else out->setText(QString("FAILE"));
}

void MainWindow::clean() {
    auto q = QString("Out:\t");
    out->setText(q);
}