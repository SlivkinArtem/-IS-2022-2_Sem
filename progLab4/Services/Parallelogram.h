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
#include "cmath"

namespace Services{
    class Parallelogram: public IGeoFig{
    private:
        double massA, massB, massC, massD;
        CVector2D dotA, dotB, dotC, dotD;
        int side1, side2;
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

#endif //PROGLAB4_PARALLELOGRAM_H
