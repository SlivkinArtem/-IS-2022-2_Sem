#include "Parallelogram.h"

CVector2D Parallelogram::position() {
    CVector2D res{};
    res.x = (dotA.x *  massA + dotB.x * massB) / (massA + massB);
    res.y = (dotA.y *  massA + dotB.y * massB) / (massA + massB);
    return res;
}

double Parallelogram::square() {
    return (side*side * sqrt(3))/ 4;
}

double Parallelogram::perimeter() {
    return side*3;
}

void Parallelogram::draw() {
    std::cout << " Side length: " << side;
    std::cout << " Mass: " << mass() << "kg";
}

void Parallelogram::initFromDialog() {
    std::cout << "Coordinate x of point A: " << std::endl;
    std::cin >> dotA.x;
    std::cout << "Coordinate y of point А: " << std::endl;
    std::cin >> dotA.y;
    std::cout << "Coordinate x of point В: " << std::endl;
    std::cin >> dotB.x;
    std::cout << "Coordinate y of point В: " << std::endl;
    std::cin >> dotB.y;
    std::cout << "Coordinate x of point C: " << std::endl;
    std::cin >> dotC.x;
    std::cout << "Coordinate y of point C: " << std::endl;
    std::cin >> dotC.y;
    std::cout << "Mass of point A: " << std::endl;
    std::cin >> massA;
    std::cout << "Mass of point В: " << std::endl;
    std::cin >> massB;
    std::cout << "Mass of point C: " << std::endl;
    std::cin >> massC;
    std::cout << "Side length: " << std::endl;
    std::cin >> side;
}

const char * Parallelogram::classname() {
    std::cout << "Equilateral Triangle";
}

unsigned int Parallelogram::size() {
    return sizeof(Parallelogram);
}

double Parallelogram::mass() {
    return massA + massB + massC;
}