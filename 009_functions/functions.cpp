#include <iostream>

using namespace std;

bool par(int num){ 
    return (num%2 == 0); 
}

int main(){
    int num;
    cout << "Digite um numero inteiro: "; 
    cin >> num;
    (par(num))?(cout << "O número " << num <<" é par" << endl):(cout << "O número " << num <<" é impar" << endl);
    return 0;
}