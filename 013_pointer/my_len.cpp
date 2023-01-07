#include <iostream>


using namespace std;

int myLen(char* name){
    int tam = 0;
    do{
        tam++;
    }while(name[tam] !='\0');

    return tam;
}

void myReverseString(char* name){
    for(int tam = myLen(name) - 1; tam >=0 ; tam --){
        cout << name[tam];
    }
    cout << endl;
}

int main(){
    char* name =  new char[256];
    cout << "which string do you would like to know the size?: ";
    cin >> name;
    cout << "the size of it is: " << myLen(name)  << " characteres" <<endl;
    cout << "this name reversed is : ";
    myReverseString(name);
    delete name;
    return 0;
}