#include "EquilateralTriangle.h"

Services::CVector2D Services::EquilateralTriangle::position() {
    Services::CVector2D res{};
    res.x = (dotA.x *  massA + dotB.x * massB) / (massA + massB);
    res.y = (dotA.y *  massA + dotB.y * massB) / (massA + massB);
    return res;
}

double Services::EquilateralTriangle::square() {
    return (side*side * sqrt(3))/ 4;
}

double Services::EquilateralTriangle::perimeter() {
    return side*3;
}

void Services::EquilateralTriangle::draw() {
    std::cout << " Side length: " << side;
    std::cout << " Mass: " << mass() << "kg";
}

void Services::EquilateralTriangle::DialogService() {
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
    std::cout << "Mass of point A: " << std::endl;
    std::cin >> massA;
    std::cout << "Mass of point B: " << std::endl;
    std::cin >> massB;
    std::cout << "Mass of point C: " << std::endl;
    std::cin >> massC;
    std::cout << "Side length: " << std::endl;
    std::cin >> side;
}

std::string Services::EquilateralTriangle::classname() {
    std::cout << "Equilateral Triangle";
}

unsigned int Services::EquilateralTriangle::size() {
    return sizeof(EquilateralTriangle);
}

double Services::EquilateralTriangle::mass() {
    return massA + massB + massC;
}