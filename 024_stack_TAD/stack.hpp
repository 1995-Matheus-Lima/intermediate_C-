#ifndef __STACK_HPP_
#define __STACK_HPP_
class Stack{
  private:
    int *vet;
    int max_tam;
    int top;
  public:
    Stack();
    ~Stack();
    void push(int element);
    void pop();
    int getTop();
    int vazia();
};
#endif