#include <iostream>
#include "stack.hpp"

using namespace std;

int main(){
  Stack<char> myStack(10);
  cout << "is the stack void?: " << (myStack.vazia()?("Yes"):("NO"))<< endl;
  cout << "Top: " << myStack.getTop() << endl;
  myStack.push('M');
  myStack.push('E');
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