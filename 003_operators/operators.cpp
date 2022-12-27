#include <iostream>

using namespace std;

int main(){
    //binary operators + - * % /
    int num1, num2;
    cout << "put the first integer: ";
    cin >> num1;
    cout << "put the second integer: ";
    cin >> num2;

    cout << num1 <<" + "<<num2 <<  " = " << num1 + num2 <<endl;
    cout << num1 <<" - "<<num2 <<  " = " << num1 - num2 <<endl;
    cout << num1 <<" * "<<num2 <<  " = " << num1 * num2 <<endl;
    cout << num1 <<" / "<<num2 <<  " = " << num1 / num2 <<endl;
    cout << num1 <<" % "<<num2 <<  " = " << num1 %  num2 <<endl;

    // take care, the operator are working and the program will run,
    // but try to imput 30 and 28, you will see that it's run but 30/28 return 1 .-. 
    // we have to change the type of que variable to float to  get a better number 
    // as the fallow how
    // cout << num1 <<" / "<<num2 <<  " = " << (float) num1 / num2 <<endl;

    //unary operators
    cout << "num1 :" << num1 << endl;
    cout << "num1++ :"<< num1++ << endl; // call before incremente
    cout << "num1 :" << num1 << endl;
    cout << "++num1 :"<<++num1<< endl; // incremente before call

    cout << "num1 :" << num1 << endl;
    cout << "num1-- :"<< num1-- << endl; // call before decrement
    cout << "num1 :" << num1 << endl;
    cout << "--num1 :"<<--num1<< endl; // decrement before call

    num1 = num1 + num2; 
    cout << "num1 = num1 + num2 :" << num1 << endl;
    num1 += num2;
    cout << "num1 += num2 :" << num1 << endl;

    return 0;
}