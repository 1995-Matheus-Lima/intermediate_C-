#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string name;
    int age;
    float height;
    cout << "name: " ;
    cin >> name;
    cout << "age: " ;
    cin >>age;
    cout << "height: " ;
    cin >> height;
    cout << "Hi my name is " << name 
    << " i'm " << age << " and my height is "
    << height << endl;

    return 0;
}