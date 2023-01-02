#include <iostream>

using namespace std;

int main(){
    long int inputnum, fat = 1;
    cout << "Deseja contar até que numero?: "; 
    cin >> inputnum;
   /* for( int i = 0; i <= inputnum; i++){
        cout << i << endl;
    }*/
    for(int x = inputnum; x > 0; x--){
        fat *= x;
    }
    cout <<"O fatorial de " << inputnum << " é " << fat << endl;
    return 0;
}