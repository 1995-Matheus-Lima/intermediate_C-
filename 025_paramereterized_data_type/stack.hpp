#ifndef __STACK_HPP_
#define __STACK_HPP_
#include <iostream>
using namespace std;

template <class TYPE>
class Stack{
  private:
    TYPE *vet;
    int max_tam;
    int top;
  public:
    Stack(int tam){
    vet = new TYPE[tam];
    max_tam = tam-1;
    top = -1;  
    }
    ~Stack(){
      delete[] vet;
    }
    void push(TYPE element){
      if(top == max_tam){
        cout << "stack full" << endl;
      }
      else{
        vet[++top] = element;
      }
    }
    void pop(){
      if(top == -1){
        cout << "void stack" << endl;
      }
      else{
        top--;
      }
    }
    TYPE getTop(){
      if(top != -1){
        return vet[top];
      }
      return -1;
    }
    int vazia(){
      return (top == -1);
    }
};
#endif