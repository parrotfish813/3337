#include <iostream>
#include "Stack.h"

using namespace std;

template<typename T>
void printStack(Stack<T> & stack) {
    while(!stack.isEmpty()){
        cout << stack.pop() << " ";
    }
    cout << endl;
}

int main() {

    Stack<int> myStack;

    for(int i = 1; i <= 10; i++) {
        myStack.push(i);
    }

    printStack(myStack);

    Stack<string> myStringStack;

    return 0;

};