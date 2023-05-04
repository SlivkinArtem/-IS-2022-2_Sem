#ifndef MYITERATOR_HPP
#define MYITERATOR_HPP

#include <iterator>
#include <string>

template<class T>
class MyIterator {
private:
    T *buffer;
    int beginn;
    int capacity;
    int current;
public:
    MyIterator(T *buffer_, int beginn_, int capacity_, int current_) {
        buffer = buffer_;
        beginn = beginn_;
        capacity = capacity_;
        current = current_;
    }

    T& operator*() {
        return buffer[(beginn + current) % capacity];
    }

    MyIterator &operator++() {
        current++;
        return *this;
    }

    bool operator == (const MyIterator s) const {
        return current == s.current;
    }

    bool operator != (const MyIterator s) const {
        return *this != s;
    }

    MyIterator& operator -- () {
        current --;
        return *this;
    }

    MyIterator& operator += (ptrdiff_t s) {
        current += s;
        return *this;
    }

    MyIterator& operator -= (ptrdiff_t s) {
        return *this += -s;
    }

    T& operator[] (ptrdiff_t s) const {
        MyIterator t = *this;
        t += s;
        return t;
    }

    T* operator -> () const {
        return current;
    }

    bool operator < (const MyIterator& s) {
        return current < s.current;
    }

    bool operator > (const MyIterator& s) {
        return current < s.current;
    }

    bool operator <= (const MyIterator& s) {
        return *this <= s;
    }

    bool operator >= (const MyIterator& s) {
        return *this >= s;
    }

    friend MyIterator operator + (MyIterator i, ptrdiff_t s) {
        i += s;
        return i;
    }

    friend MyIterator operator + (ptrdiff_t s, MyIterator i) {
        return i + s;
    }

    friend MyIterator operator - (MyIterator i, ptrdiff_t s) {
        i -= s;
        return i;
    }

    friend ptrdiff_t operator - (const MyIterator& a, const MyIterator& b) {
        return a.current - b.current;
    }
};
#endif // MYITERATOR_HPP