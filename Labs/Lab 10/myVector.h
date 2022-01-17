#ifndef MYVECTOR_H
#define MYVECTOR_H

#include <iostream>
#include <string>

using namespace std;

template<typename T>
class myVector {

//Defining the private variables
private:
    T * vec;
    int size, capacity;

//Defining the public function
public:
    myVector();
    myVector(int capacity);
    myVector(const myVector &vect);
    ~myVector();

    T getSize();
    T getCapacity();
    T getVec();

    void insertBeg(T value);
    void insertEnd(T value);
    void removeBeg();
    void removeEnd();
    void increaseCapacity();
    void decreaseCapacity();

};

//Default constructor
template<typename T>
myVector<T>::myVector() {
    size = 0;
    capacity = 4;
    vec = new T[capacity];
}

//User defined constructor
template<typename T>
myVector<T>::myVector(int newCapacity) {
    size = 0;
    capacity = newCapacity;
    vec = new T[capacity];
}

//Copies the contents of one array and puts it into a new one
template<typename T>
myVector<T>::myVector(const myVector &vect) {
    vec = new T[vect.capacity];
    size = vect.size;
    capacity = vect.capacity;
    for (int i = 0; i < size; i++) {
        vec[i] = vect.vec[i];
    }
}

//Returns the current size
template<typename T>
T myVector<T>::getSize() {
    return size;
}

//Returns the current capacity
template<typename T>
T myVector<T>::getCapacity() {
    return capacity;
}

//Prints out the contents of the array
template<typename T>
T myVector<T>::getVec() {
    for(int i = 0; i < size; i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

//Deconstructor, deletes all contents of the array
template<typename T>
myVector<T>::~myVector() {
    delete [] vec;
}

//Inserts a value at the beginning of the array
template<typename T>
void myVector<T>::insertBeg(T value) {
    size++;
    increaseCapacity();
    for (int i = size - 1; i > 0; i--) {
        vec[i] = vec[i + 1];
    }
    vec[0] = value;
}

//Inserts a value at the end of the array
template<typename T>
void myVector<T>::insertEnd(T value) {
    increaseCapacity();
    vec[size++] = value;
}

//Removes a value at the beginning of the array
template<typename T>
void myVector<T>::removeBeg() {
    decreaseCapacity();
    for(int i = size - 1; i > 0; i++) {
        vec[size] = vec[size + 1];
    }
    vec[0] = 0;
}

//Removes a value at the beginning of the array
template<typename T>
void myVector<T>::removeEnd() {
    decreaseCapacity();
    size--;
}

//Increases the size of the array if the capacity is equal to the size
template<typename T>
void myVector<T>::increaseCapacity() {
    if (size == capacity) {
        T* old = vec;
        vec = new T[size * 2];
        for (int i = 0; i < size; i++) {
            vec[i] = old[i];
        }
        delete [] old;
    }
}

//Decreases the size of the array if the size is equal to half the capacity
template<typename T>
void myVector<T>::decreaseCapacity() {
    if (size == (capacity / 2)) {
        T* old = vec;
        vec = new T[size / 2];
        for (int i = 0; i < size; i++) {
            vec[i] = old[i];
        }
        delete [] old;
    }
}

#endif
