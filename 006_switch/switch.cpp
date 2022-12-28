#include <iostream>

using namespace std;

int main(){
   int num = 10;
   switch(num * 4){
    // switch will chech for each case if the case x , x is the result of num * 4, 
    case 10:
        cout << "num = 10" << endl;
        break; 
        //if we don't put break, every case in the bellows runs will happen 
        //take care to make sure that you are doing what you want. 
    case 20:
        cout << "num = 20" << endl;
        break; 
    case 30:
        cout << "num = 30" << endl;
        break; 
    case 40:
        cout << "num = 40" << endl;
        break; 
    default:
        cout << "standart output";
   }
    return 0;
}