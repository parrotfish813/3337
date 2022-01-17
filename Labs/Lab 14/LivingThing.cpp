#include <iostream>

using namespace std;

class LivingThing {
public:
    LivingThing() {
        cout << "This is the constructor of Living Thing class" << endl;
    }
    void toString() {
        cout << "Called toString() function of Living Thing class" << endl;
    }
};

class Animal : public LivingThing {
public:
    Animal() {
        cout << "This is the constructor of Animal class" << endl;
    }
    void toString() {
        cout << "Called toString() function of Animal class" << endl;
    }
};

class Fish : public Animal {
public:
    Fish() {
        cout << "This is the constructor of Fish class" << endl;
    }
    void toString() {
        cout << "Called toString() function of Fish class" << endl;
    }
};

class Sardine : public Fish {
public:
    Sardine() {
        cout << "This is the constructor of Sardine class" << endl;
    }
    void toString() {
        cout << "Called toString() function of Sardine class" << endl;
    }
};

class Bass : public Fish {
public:
    Bass() {
        cout << "This is the constructor of Bass class" << endl;
    }
    void toString() {
        cout << "Called toString() function of Bass class" << endl;
    }
};

class Mammal : public Animal {
public:
    Mammal() {
        cout << "This is the constructor of Mammal class" << endl;
    }
    void toString() {
        cout << "Called toString() function of Mammal class" << endl;
    }
};

class Cat : public Mammal {
public:
    Cat() {
        cout << "This is the constructor of Cat class" << endl;
    }
    void toString() {
        cout << "Called toString() function of Cat class" << endl;
    }
};

class Tiger : public Cat {
public:
    Tiger() {
        cout << "This is the constructor of Tiger class" << endl;
    }
    void toString() {
        cout << "Called toString() function of Tiger class" << endl;
    }
};

class Lion : public Cat {
public:
    Lion() {
        cout << "This is the constructor of Lion class" << endl;
    }
    void toString() {
        cout << "Called toString() function of Lion class" << endl;
    }
};

class Plant : public LivingThing {
public:
    Plant() {
        cout << "This is the constructor of Plant class" << endl;
    }
    void toString() {
        cout << "Called toString() function of Plant class" << endl;
    }
};

class Tree : public Plant {
public:
    Tree() {
        cout << "This is the constructor of Tree class" << endl;
    }
    void toString() {
        cout << "Called toString() function of Tree class" << endl;
    }
};

class Cherry : public Tree {
public:
    Cherry() {
        cout << "This is the constructor of Cherry class" << endl;
    }
    void toString() {
        cout << "Called toString() function of Cherry class" << endl;
    }
};

class Chestnut : public Tree {
public:
    Chestnut() {
        cout << "This is the constructor of Chestnut class" << endl;
    }
    void toString() {
        cout << "Called toString() function of Chestnut class" << endl;
    }
};

int main() {

    Sardine s1;
    Bass b1;
    Tiger t1;
    Lion l1;
    Cherry cr1;
    Chestnut cn1;

    Tree tree1;

    tree1.toString();
    cr1.Tree::toString();

    return 0;

};