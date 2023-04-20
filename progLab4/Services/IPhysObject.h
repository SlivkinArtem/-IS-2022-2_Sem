#ifndef PROGLAB4_IPHYSOBJECT_H
#define PROGLAB4_IPHYSOBJECT_H
#include "CVector2D.h"

namespace Services {
    class IPhysObject{
    public:
        virtual double mass() = 0;
        virtual Services::CVector2D position() = 0;
//    virtual bool operator==(const IPhysObject& ob) const = 0;
//    virtual bool operator< ( const IPhysObject& ob ) const = 0;
    };
}

#endif //PROGLAB4_IPHYSOBJECT_H
