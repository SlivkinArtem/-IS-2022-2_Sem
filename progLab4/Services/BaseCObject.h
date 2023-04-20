#ifndef PROGLAB4_BASECOBJECT_H
#define PROGLAB4_BASECOBJECT_H
#include "string"

namespace Services {
    class BaseCObject{
    public:
        virtual std::string classname() = 0;
        virtual unsigned int size() = 0;
    };
}

#endif //PROGLAB4_BASECOBJECT_H
