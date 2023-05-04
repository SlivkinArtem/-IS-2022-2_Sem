#ifndef CIRCULARBUFFER_HPP
#define CIRCULARBUFFER_HPP

#include <iterator>
#include <string>
#include "MyIterator.hpp"

template<class T>
class CircularBuffer {
private:
    T* buffer;
    int capacity; // minimal guaranteed amount of allocated memory
    int beginn;
    int size;
public:
    CircularBuffer(int C) {
        buffer = new T[C];
        capacity = C;
        size = 0;
        beginn = 0;
    }

    ~CircularBuffer(){
        delete[] buffer;
    }

    MyIterator<T> begin() const {
        return MyIterator<T>(buffer, beginn, capacity, 0);
    }

    MyIterator<T> end() const {
        return MyIterator<T>(buffer, beginn, capacity, size);
    }

    void addFirst(const T& t) {
        if (beginn == 0)
            beginn = capacity - 1;
        else
            beginn--;
        buffer[beginn] = t;
        if (size != capacity)
            size ++;
    }

    void addLast(const T& t) {
        buffer[(beginn + size) % capacity] = t;
        if (size != capacity)
            size++;
    }

    T first() {
        return buffer[beginn];
    }

    T last() {
        return buffer[(beginn + size - 1) % capacity];
    }

    T& operator [](int i) const {
        if (i < 0 || i >= size) {
            std::string exc = "Call to the " + std::to_string(i) + " element, buffer size is " + std::to_string(size);
            throw std::out_of_range(exc);
        }
        return buffer[(beginn + i) % capacity];
    }

    void deleteFirst() {
        beginn = (beginn + 1) % capacity;
        if (size != 0)
            size --;
    }

    void deleteLast() {
        if (size != 0)
            size --;
    }

    void changeCapacity(int c) {
        T* newBuffer = new T[c];
        if (c < size)
            size = c;
        int cur = beginn;
        for (int i = 0; i < size; i++) {
            newBuffer[i] = buffer[cur];
            cur = (cur + 1) % capacity;
        }
        delete[] buffer;
        buffer = newBuffer;
        beginn = 0;
        capacity = c;
    }
};

#endif // CIRCULARBUFFER_HPP