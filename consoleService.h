#ifndef PROG_LAB2_CONSOLESERVICE_H
#define PROG_LAB2_CONSOLESERVICE_H

#include "writeFileStream.h"

class ConsoleService {
private:
    WriteFileStream fileStream;
    bool processAction();
public:
    ConsoleService();
    ConsoleService(std::string);
    void run();
};

#endif //PROG_LAB2_CONSOLESERVICE_H
