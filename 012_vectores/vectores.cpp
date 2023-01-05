#include <iostream>


using namespace std;

int main(){
    int vector[10];
    for(int i = 0; i <10 ; i++){
        vector[i] = i * i;
    }
    for(int i = 0; i <10 ; i++){
        cout << "Item na posição " << i << " : " << vector[i]  << endl;
    }
    return 0;
}