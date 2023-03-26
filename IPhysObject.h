#ifndef PROGLAB4_IPHYSOBJECT_H
#define PROGLAB4_IPHYSOBJECT_H
#include "CVector2D.h"

class IPhysObject{
public:
    virtual double mass() = 0;
    virtual CVector2D position() = 0;
    virtual bool operator==(const IPhysObject& ob) const = 0;
    virtual bool operator< ( const IPhysObject& ob ) const = 0;
};
#endif //PROGLAB4_IPHYSOBJECT_H
