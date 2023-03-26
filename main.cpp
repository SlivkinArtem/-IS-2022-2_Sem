#include <iostream>
#include "EquilateralTriangle.h"
#include "Parallelogram.h"
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    vector<EquilateralTriangle *> triangles;
    vector<Parallelogram *> circles;
    vector<pair<int, int>> sortedTriangles;
    vector<pair<int, int>> sortedCircles;
    int n1 = 0;
    int n2 = 0;
    cout << " Какую фигуру добавим? с/t/s (Parallelogram/Equilateral Triangle/Stop)" << endl;
    char c;
    while(cin >> c) {
        if (c == 't') {
            cout << " Введите данные равностороннего треугольника " << endl;
            EquilateralTriangle t;
            t.initFromDialog();
            triangles.push_back(&t);
            n1++;
            sortedTriangles.push_back(make_pair(t.mass(), n1));
        }
        else if (c == 'c') {
            cout << " Введите данные круга " << endl;
            Parallelogram circ;
            circ.initFromDialog();
            circles.push_back(&circ);
            n2++;
            sortedCircles.push_back(make_pair(circ.mass(), n2));
        } else {
            int mt = 0;
            int pt = 0;
            int st = 0;
            int sizt = 0;
            for (int i = 0; i < triangles.size(); i++) {
                mt += triangles[i]->mass();
                pt += triangles[i]->perimeter();
                st += triangles[i]->square();
                sizt += triangles[i]->size();
            }
            int mc = 0;
            int pc = 0;
            int sc = 0;
            int sizc = 0;
            for (int i = 0; i < circles.size(); i++) {
                mc += circles[i]->mass();
                pc += circles[i]->perimeter();
                sc += circles[i]->square();
                sizc += circles[i]->size();
            }
            std::sort(sortedTriangles.begin(), sortedTriangles.end());
            sort(sortedCircles.begin(), sortedCircles.end());
            cout << " Объект Круг" << endl;
            cout << " Масса всех объектов : " << mc << endl;
            cout << " Периметр всех объектов :  " << pc << endl;
            cout << " Площадь всех объектов  равна : " << sc <<endl;
            cout << " Объекты занимают : " << sizc << endl;
            cout << "Объекты в отсортированном порядке : ";
            for(int i = 0; i < sortedCircles.size(); i++){
                cout << sortedCircles[i].second;
            }
            cout << endl;
            cout << " Объект Равносторонний треугольник" << endl;
            cout << " Масса всех объектов : " << mt << endl;
            cout << " Периметр всех объектов :  " << pt << endl;
            cout << " Площадь всех объектов  равна : " << st << endl;
            cout << " Объекты занимают : " << sizt << endl;
            cout << "Объекты в отсортированном порядке : ";
            for(int i = 0; i < sortedTriangles.size(); i++){
                cout << sortedTriangles[i].second;
            }
            break;
        }
        if(c == 't'|| c == 'c') {
            cout << " Какую фигуру добавим? с/t/s (Parallelogram/Equilateral Triangle/Stop)" << endl;
        }
    }
    return 0;
}