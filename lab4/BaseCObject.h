#ifndef PROGLAB4_BASECOBJECT_H
#define PROGLAB4_BASECOBJECT_H

class BaseCObject{
public:
    virtual const char* classname() = 0;
    virtual unsigned int size() = 0;
};
#endif //PROGLAB4_BASECOBJECT_H
