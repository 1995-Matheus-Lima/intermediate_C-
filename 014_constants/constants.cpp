#include <iostream>
#include <string.h>
using namespace std;

int main(){
    //const int matheus;
    //we have to iniciate the constants when we declare it
    const double PI = 3.1415;
    int* const pPI = new int[3];
    const char* const name = "Matheus";
    //this pointer to a constant and we can't change both, the adress of name and it's letters
    *pPI = 1;
    *(pPI+1) = 2;
    *(pPI+2) = 3;
    cout << *pPI<< endl;
    cout << *(pPI+1)<< endl;
    cout << *(pPI+2)<< endl;
    pPI[2] = 10;
    cout << *(pPI+2)<< endl;
    cout << name << endl;

    int vet[4];
    //it's as we declarete int * const vet = new int[4];
    return 0;
}