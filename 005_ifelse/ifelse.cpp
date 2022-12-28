#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string secretpassword;
    cout << "What is the secret password: ";
    cin >> secretpassword;
    if(secretpassword == "1234secret"){
        cout << "Welcome to the secret archives" <<endl;
    }else{
        cout << "acess denied"<< endl;
    }
    return 0;
}