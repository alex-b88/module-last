
#include "Cell.h"

Cell::Cell(int value) {
    this->value=value;
    isAviable=false;
}

void Cell::setValue(int x) {
        this->value=x;
        isAviable=true;
}

bool Cell::getAviable() const {
    return isAviable;
}

void Cell::showCell() const {
    cout << value <<" ";
}

void Cell::setAviable(bool n) {
    this->isAviable=n;
}
