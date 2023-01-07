#include <iostream>

using namespace std;

int main(){
    int* pArray =  new int[10];

    //every time that we  use  a pointer in this way
    //we should delete it!
    //how bigger our progam are getting,  more memory it will needs 
    //we should use less as possible.
    //in simple programs it don't is necessary because the memory is free when the program finish
    //but to bigger programs it  probabily  can became slow and cause severe damages and risk to your
    // aplication

    delete[] pArray;
    return 0;
}