#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string name1, name2;
    cout << "PLAYER1: what is your name: ";
    cin >> name1;

    cout << "PLAYER2: what is your name: ";
    cin >> name2;

    if(name1.compare(name2) == 0){
        cout << "that is cool! both of you have the same name!"<<endl;
    }else{
        cout << name1 <<" be prepared to fight with "<<name2 << "to keep your honor!!" << endl;
    }
   
    return 0;
}