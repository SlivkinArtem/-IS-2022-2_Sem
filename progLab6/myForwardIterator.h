#ifndef PROGLAB6_MYFORWARDITERATOR_H
#define PROGLAB6_MYFORWARDITERATOR_H
#include "iterator"
#include "vector"

class myForwardIterator : public std::vector<int>::iterator {
    using Number = std::vector<int>::iterator;
    using Number::Number;
public:
    auto operator--(int) const = delete;
    auto operator--() const = delete;
    auto operator-(difference_type __n) const = delete;
    myForwardIterator(__normal_iterator <pointer, std::vector<int>> iterator) : Number(iterator){};
};

#endif //PROGLAB6_MYFORWARDITERATOR_H
