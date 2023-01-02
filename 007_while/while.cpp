#include <iostream>

using namespace std;

int main(){
    int num = 0 , inputnum;
    cout << "Deseja contar até que numero?: "; 
    cin >> inputnum;
    while(num <= inputnum){
        cout << num <<endl;
        num++;
    }  

    return 0;
}