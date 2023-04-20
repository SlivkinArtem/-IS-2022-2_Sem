#include "Parallelogram.h"

Services::CVector2D Services::Parallelogram::position() {
    CVector2D res{};
    res.x = (dotA.x *  massA + dotB.x * massB) / (massA + massB);
    res.y = (dotA.y *  massA + dotB.y * massB) / (massA + massB);
    return res;
}

double Services::Parallelogram::square() {
    return (side1 * side2);
}

double Services::Parallelogram::perimeter() {
    return (side1 + side2) * 2;
}

void Services::Parallelogram::draw() {
    std::cout << "Side1's length: " << side1 << " " << "Side2's length: " << side2;
    std::cout << "Mass: " << mass() << "kg";
}

void Services::Parallelogram::DialogService() {
    std::cout << "Coordinate x of point A: " << std::endl;
    std::cin >> dotA.x;
    std::cout << "Coordinate y of point A: " << std::endl;
    std::cin >> dotA.y;
    std::cout << "Coordinate x of point B: " << std::endl;
    std::cin >> dotB.x;
    std::cout << "Coordinate y of point B: " << std::endl;
    std::cin >> dotB.y;
    std::cout << "Coordinate x of point C: " << std::endl;
    std::cin >> dotC.x;
    std::cout << "Coordinate y of point C: " << std::endl;
    std::cin >> dotC.y;
    std::cout << "Coordinate x of point D: " << std::endl;
    std::cin >> dotD.x;
    std::cout << "Coordinate y of point D: " << std::endl;
    std::cin >> dotD.y;
    std::cout << "Mass of point A: " << std::endl;
    std::cin >> massA;
    std::cout << "Mass of point B: " << std::endl;
    std::cin >> massB;
    std::cout << "Mass of point C: " << std::endl;
    std::cin >> massC;
    std::cout << "Mass of point D: " << std::endl;
    std::cin >> massD;
    std::cout << "Side1's length: " << std::endl;
    std::cin >> side1;
    std::cout << "Side2's length: " << std::endl;
    std::cin >> side2;
}

std::string Services::Parallelogram::classname() {
    std::cout << "Parallelogram";
}

unsigned int Services::Parallelogram::size() {
    return sizeof(Parallelogram);
}

double Services::Parallelogram::mass() {
    return massA + massB + massC + massD;
}