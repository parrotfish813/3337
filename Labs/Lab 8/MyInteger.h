#ifndef MYINTEGER_H
#define MYINTEGER_H

class MyInteger {

private:
    int value;
    static double averageOfIntegers;

    static int sumOfIntegers;
    static int numberOfObjects;

public:
    MyInteger();
    MyInteger(int value);

    void setValue(int value);
    const int getValue();

    bool isEven() const;
    static bool isOdd(int value);

    bool equals(int value) const;
    bool equals2(const MyInteger &myInt) const;

    static double getAverageOfIntegers();

};

#endif
