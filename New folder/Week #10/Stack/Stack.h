#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <string>

using namespace std;

template<typename T>
class Stack {

private:
    int size; //Number of elements
    T elements[100];

public:
    Stack();

    bool isEmpty() const;
    T peak() const;
    T pop();
    void push(T value);

    int getSize() const;

};

template class Stack<int>;
template class Stack<char>;
template class Stack<string>;

#endif
