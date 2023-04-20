#include "IGeoFig.h"
#include "Parallelogram.h"
#include "EquilateralTriangle.h"

namespace Services {
    class Creation {
    public: virtual IGeoFig *createGeoFig() = 0;
        virtual ~ Creation() {}
    };

    class EquilateralTriangleCreation: public Creation{
    public: IGeoFig *createGeoFig() {
            return new EquilateralTriangle();
    }
    };

    class ParallelogramCreation: public Creation {
    public: IGeoFig *createGeoFig() {
            return new Parallelogram();
    }
    };
}

