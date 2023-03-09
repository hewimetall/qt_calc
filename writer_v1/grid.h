//
// Created by xx on 3/8/23.
//

#ifndef WRITER_GRID_H
#define WRITER_GRID_H
#include <QGridLayout>
#include <QPushButton>

class FormGrid : public QVBoxLayout
{
    Q_OBJECT
public:
    FormGrid();
    QHBoxLayout *gridLayoutT;
    QVBoxLayout *gridLayoutI;
};


#endif //WRITER_GRID_H
