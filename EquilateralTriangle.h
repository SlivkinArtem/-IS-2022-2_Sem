#ifndef PROGLAB4_EQUILATERALTRIANGLE_H
#define PROGLAB4_EQUILATERALTRIANGLE_H
#include <iostream>
#include <cmath>
#include "IGeoFig.h"
#include "IPhysObject.h"
#include "IPrintable.h"
#include "DialogInitiable.h"
#include "BaseCObject.h"
#include "string"

class EquilateralTriangle: public IPhysObject, IPrintable, BaseCObject, DialogInitiable, IGeoFig{
private:
    double massA, massB, massC;
    CVector2D dotA, dotB, dotC;
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

#endif //PROGLAB4_EQUILATERALTRIANGLE_H
