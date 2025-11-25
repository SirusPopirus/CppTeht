#ifndef STACK_HPP
#define STACK_HPP

#include <iostream>

template <typename T>
class Stack {
private:
    T* data;
    int capacity;
    int topIndex;

public:
    Stack(int cap) : capacity(cap), topIndex(0) {
        data = new T[capacity];
    }

    ~Stack() {
        delete[] data;
    }

    void push(const T& value) {
        data[topIndex++] = value;
    }

    T pop() {
        return data[--topIndex];
    }

    int size() const {
        return topIndex;
    }
};

#endif
