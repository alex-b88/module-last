
#ifndef MODULELAST_CELL_H
#define MODULELAST_CELL_H
#include "../includes.h"

class Cell {
protected:
    int value;
    bool isAviable;
public:
    Cell(int value);
    void setValue(int x);
    bool getAviable()const;
    void showCell()const;
    void setAviable(bool n);
};


#endif //MODULELAST_CELL_H
