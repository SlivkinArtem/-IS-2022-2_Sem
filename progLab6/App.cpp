#include "App.h"
#include "Algorithms.h"
#include "Algorithms.cpp"
#include "vector"
#include "string"
#include "assert.h"
#include "myForwardIterator.h"

int App::start() {
    struct Cpoint {
        int x;
        int y;
    };
    std::vector<Cpoint> numbers1;
    numbers1.push_back({1, 1});
    numbers1.push_back({2, 2});

    std::cout <<
    "all_of: " << allOf(numbers1.begin(), numbers1.end(), [](const Cpoint &point) {return (point.x == point.y);}) << std::endl;

    std::vector<int> numbers2;
    numbers2.push_back(10);
    numbers2.push_back(10000000);

    std::cout <<
    "one_of: " << oneOf(numbers2.begin(), numbers2.end(), [](int n) {return (n >= 10000000);}) << std::endl;

    std::vector<int> numbers3{1, 2, 3, 4, 2};
    assert(findBackward(static_cast<myForwardIterator>(numbers3.begin()), static_cast<myForwardIterator>(numbers3.end()), 2) == --numbers3.end());
    assert(findBackward(static_cast<myForwardIterator>(numbers3.begin()), static_cast<myForwardIterator>(numbers3.end()), 5) == numbers3.end());
}