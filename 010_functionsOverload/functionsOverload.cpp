#include <iostream>

using namespace std;

void msg( int n ){
    cout << "this is the message when i put an integer as argument on the functuon" << endl;
}
void msg( ){
    cout << "this is the message when i have no on the functuon" << endl;
}
int main(){
   msg();
   msg(10);
    return 0;
}