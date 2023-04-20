#ifndef PROGLAB4_EQUILATERALTRIANGLE_H
#define PROGLAB4_EQUILATERALTRIANGLE_H
#include <iostream>
#include <cmath>
#include "IGeoFig.h"


namespace Services{
    class EquilateralTriangle: public IGeoFig{
    private:
        double massA, massB, massC;
        CVector2D dotA, dotB, dotC;
        int side;
    public:
        CVector2D position() override;
        double square() override;
        double perimeter() override;
        void draw() override;
        void DialogService() override;
        std::string classname() override;
        unsigned int size() override;
        double mass() override;
    };
}


#endif //PROGLAB4_EQUILATERALTRIANGLE_H
