//
// Created by xx on 3/8/23.
//

#include "grid.h"

FormGrid::FormGrid() {
    this->gridLayoutI = new QVBoxLayout;
    this->gridLayoutT = new QHBoxLayout;
    addLayout(gridLayoutI);
    addLayout(gridLayoutT);
}