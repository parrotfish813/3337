#include <iostream>
#include <string>
#include "Stack.h"

using namespace std;

template<typename T>
void printStack(Stack<T>& stack)
{
  while (!stack.empty())
    cout << stack.pop() << " ";
  cout << endl;
}

int main()
{
  Stack<int> intStack;

  intStack.push(4);
  intStack.push(1);
  intStack.push(2);
  intStack.push(3);

  cout << "Capacity of the Stack is: " << intStack.getCapacity() << endl;

  intStack.push(7);
  intStack.push(5);
  intStack.push(8);
  intStack.push(9);
  intStack.push(10);

  printStack(intStack);

  cout << "Capacity of the Stack is: " << intStack.getCapacity() << endl;

  return 0;
}