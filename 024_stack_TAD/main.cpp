#include <iostream>
#include "stack.hpp"

using namespace std;

int main(){
  Stack myStack;
  cout << "is the stack void?: " << (myStack.vazia()?("Yes"):("NO"))<< endl;
  cout << "Top: " << myStack.getTop() << endl;
  myStack.push(3);
  myStack.push(12);
  cout << "is the stack void?: " << (myStack.vazia()?("Yes"):("NO"))<< endl;
  cout << "Top: " << myStack.getTop() << endl;
  myStack.pop();
  cout << "is the stack void?: " << (myStack.vazia()?("Yes"):("NO"))<< endl;
  cout << "Top: " << myStack.getTop() << endl;
  myStack.pop();
  cout << "is the stack void?: " << (myStack.vazia()?("Yes"):("NO"))<< endl;
  cout << "Top: " << myStack.getTop() << endl;
  myStack.pop();

  return 0;
}