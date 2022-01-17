#include <iostream>

using namespace std;

class Instrument {
public:
    Instrument() {

    }
    virtual void makeSound() = 0;
};

class Accordion : public Instrument {
public:
    Accordion() {

    }
    void makeSound() {
        cout << "Accordion playing..." << endl;
    }
};
class Piano : public Instrument {
public:
    Piano() {

    }
    void makeSound() {
        cout << "Piano playing..." << endl;
    }
};

class grandPiano : public Piano {
public:
    grandPiano() {

    }
    void makeSound() {
        cout << "Grand Piano playing..." << endl;
    }
};

int main() {

    Instrument* i1 = new Accordion();

    i1->makeSound();

    Instrument* i2 = new Piano();

    i2->makeSound();

    Instrument* i3 = new grandPiano();

    i3->makeSound();

    return 0;

};