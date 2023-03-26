#include <iostream>
#include <fstream>
#include "consoleService.h"

using namespace std;

int main(int argc, char *argv[]){
    if (argc == 0){
        (new ConsoleService())->run();
    }
    else if (argc == 1){
        std::string filename = argv[0];
        (new ConsoleService(filename))->run();
    }
    return 0;
}