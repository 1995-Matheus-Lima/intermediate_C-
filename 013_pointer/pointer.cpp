#include <iostream>
#include <string.h>
using namespace std;


void changeName(string* name ){
    cout << "What name will replace the name " << *name << " : ";
    cin >> *name;
}
int main(){
    string name;
    cout << "What is your name?: ";
    cin >> name;
    string* pName = &name;
    cout << "the name " << *pName << " is armazened inside the hexdecimal address: " << pName << endl;
    changeName(pName);
    cout << "The new name inside the variable is " << name << endl;
    return 0;
}
