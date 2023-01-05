#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string name;
    cout << "what is your name: ";
    cin >> name;
    cout << "Welcome "<< name << endl;
    cout << "Youy name have " << name.size() << " letters" << endl; 
    return 0;
}