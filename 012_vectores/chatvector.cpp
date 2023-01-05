#include <iostream>

using namespace std;

void imprimeLetras(char name[]){
    int tam;
    for( tam = 0 ; name[tam]; tam++);
    cout << tam << endl;
    for(int i = tam-1 ; i >= 0 ;i--){
        cout << name[i];
    }
    cout << endl;
}

int main(){
    char name[] = "Matheus";
    imprimeLetras(name);
    return 0;
}