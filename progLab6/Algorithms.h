#ifndef PROGLAB6_ALGORITHMS_H
#define PROGLAB6_ALGORITHMS_H
#include "iostream"
#include "string"

template<class Iterator, class Predicate>
bool allOf(Iterator begin, Iterator end, Predicate pred);

template<class Iterator, class Predicate>
bool anyOf(Iterator begin, Iterator end, Predicate pred);

template<class Iterator, class Predicate>
bool noneOf(Iterator begin, Iterator end, Predicate pred);

template<class Iterator, class Predicate>
bool oneOf(Iterator begin, Iterator end, Predicate pred);

template<class Iterator, class Predicate>
bool isSorted(Iterator begin, Iterator end, Predicate pred);

template<class Iterator>
bool isSorted(Iterator begin, Iterator end);

template<class Iterator, class Number>
Iterator findNot(Iterator begin, Iterator end, const Number& num);

template<class Iterator, class Number>
Iterator findBackward(Iterator begin, Iterator end, const Number& num);

template<class Iterator, class Predicate>
bool isPartitioned(Iterator begin, Iterator end, Predicate pred);

#endif //PROGLAB6_ALGORITHMS_H