#include <algorithm>
#include "App.h"

int App::start(){
    auto equilateralTriangleCreation = new Services::EquilateralTriangleCreation;
    auto parallelogramCreation = new Services::ParallelogramCreation;
    std::vector<Services::IGeoFig *> allFigures;
    std::vector<std::pair<int, int>> sortedObjects;
    int n = 0;
    std::cout << "Choose the figure p/t/f (Parallelogram/Equilateral Triangle/Finish)" << std::endl;
    char chosenFigure;
    while (std::cin >> chosenFigure) {
        if (chosenFigure == triangle) {
            std::cout << " Write the data of equilateral triangle " << std::endl;
            Services::IGeoFig *tr = equilateralTriangleCreation->createGeoFig();
            tr->DialogService();
            allFigures.push_back(tr);
            n++;
            sortedObjects.push_back(std::make_pair(tr->mass(), n));
        } else if (chosenFigure == parallelogram) {
            std::cout << " Write the data of parallelogram " << std::endl;
            Services::IGeoFig *par = parallelogramCreation->createGeoFig();
            par->DialogService();
            allFigures.push_back(par);
            n++;
            sortedObjects.push_back(std::make_pair(par->mass(), n));
        } else if (chosenFigure == finish) {
            int massT = 0, perimeterT = 0, squareT = 0, sizeT = 0;
            for (int i = 0; i < allFigures.size(); i++) {
                perimeterT += allFigures[i]->perimeter();
                squareT += allFigures[i]->square();
                sizeT += allFigures[i]->size();
                massT += allFigures[i]->mass();
            }
            std::sort(sortedObjects.begin(), sortedObjects.end());
            std::cout << " Perimeter of all objects :  " << perimeterT << std::endl;
            std::cout << " Square of all objects : " << squareT << std::endl;
            std::cout << " Mass of all objects : " << massT << std::endl;
            std::cout << " Objects take : " << sizeT << std::endl;
            std::cout << "Objects in sorted order : ";
            for (int i = 0; i < sortedObjects.size(); i++) {
                std::cout << sortedObjects[i].second << ' ';
            }
            break;
        }
        if (chosenFigure == 't' || chosenFigure == 'p') {
            std::cout << " what figure do we add? p/t/f (Parallelogram/Equilateral Triangle/Finish)" << std::endl;
        }
    }
    return 0;
}