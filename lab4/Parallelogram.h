#ifndef PROGLAB4_PARALLELOGRAM_H
#define PROGLAB4_PARALLELOGRAM_H
#include <iostream>
#include <cmath>
#include "IGeoFig.h"
#include "IPhysObject.h"
#include "IPrintable.h"
#include "DialogInitiable.h"
#include "BaseCObject.h"
#include "string"

class Parallelogram: public IPhysObject, IPrintable, BaseCObject, DialogInitiable, IGeoFig{
private:
    double massA, massB, massC, massD;
    CVector2D dotA, dotB, dotC, dotD;
    int side;
public:
    CVector2D position() override;
    double square() override;
    double perimeter() override;
    void draw() override;
    void initFromDialog() override;
    const char * classname() override;
    unsigned int size() override;
    double mass() override;
};

#endif //PROGLAB4_PARALLELOGRAM_H
