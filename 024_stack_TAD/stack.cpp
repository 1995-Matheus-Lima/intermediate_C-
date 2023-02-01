#include <iostream>
#include "stack.hpp"
using namespace std;


Stack::Stack(){
  vet = new int[100];
  max_tam = 99;
  top = -1;  
}
Stack::~Stack(){
  delete[] vet;
}
void Stack::push(int element){
  if(top == max_tam){
    cout << "stack full" << endl;
  }
  else{
    vet[++top] = element;
  }
}
void Stack::pop(){
  if(top == -1){
    cout << "void stack" << endl;
  }
  else{
    top--;
  }
}
int Stack::getTop(){
  if(top != -1){
    return vet[top];
  }
  return -1;
}
int Stack::vazia(){
  return (top == -1);
}
