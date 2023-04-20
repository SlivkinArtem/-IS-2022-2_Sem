#ifndef PROGLAB4_IGEOFIG_H
#define PROGLAB4_IGEOFIG_H
#include "IPhysObject.h"
#include "IPrintable.h"
#include "DialogInitiable.h"
#include "BaseCObject.h"


namespace Services {
    class IGeoFig: public IPrintable, public IPhysObject, public BaseCObject, public DialogInitiable {
    public:
        virtual double square() = 0;
        virtual double perimeter() = 0;
    };
}

#endif //PROGLAB4_IGEOFIG_H
