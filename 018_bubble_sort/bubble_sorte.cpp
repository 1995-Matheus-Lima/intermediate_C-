#include <iostream>
#include <string.h>
#define MAX 10


using namespace std;


class Car {
    public:
        char name[100];
        char color[20];
        char id[20];
        double price;
};

//sorting using the bubble sort algorithm
void sorting(Car* cars, int tam){
    Car aux;
    for(int i = tam; i>=0; i--){
        for(int j = 1; j<=i ; j++){
            if(strcmp(cars[j-1].name,cars[j].name)>=1){
                aux = cars[j];
                cars[j] = cars[j-1];
                cars[j-1] = aux;
            }
        }
    }
}

int main(){
    Car cars[MAX];
    int i = 0;

    while(true){
        char RESP;
        cout << "Enter the car name: ";
        cin >> cars[i].name;
        cout << "Enter the car Price: ";
        cin >> cars[i].price;
        cout << "would like to input other car? type 'Y' to yes and 'N' to no : ";
        cin >> RESP;
        if(RESP != 'Y'){
            break;
        }
        cout << endl;
        i++;
    }

    cout << "_________Cars Save___________" << endl;
    for(int j = 0 ; j <= i ; j++){
        cout <<"Car name: " <<cars[j].name << endl;
        cout <<"Car price: " <<cars[j].price << endl;
        cout << "-----------------------------" << endl;
    }

    cout << "_________Cars ordened by name___________" << endl;
    sorting(cars, i);
     for(int j = 0 ; j <= i ; j++){
        cout <<"Car name: " <<cars[j].name << endl;
        cout <<"Car price: " <<cars[j].price << endl;
        cout << "-----------------------------" << endl;
    }
    return 0;
} 