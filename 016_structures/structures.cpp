#include <iostream>
#include <string.h>

using namespace std;

typedef struct {
    char name[100];
    int age;
}t_person;

int main(){
    t_person *people = new t_person[10];

    strcpy(people[1].name, "Matheus");
    people[1].age = 27;
    strcpy(people[2].name, "Emily");
    people[2].age = 12;
    cout <<"name: "<< people[1].name << endl;
    cout <<"age: "<< people[1].age << endl;
    cout << "name: "<< people[2].name << endl;
    cout <<"age: "<< people[2].age << endl;

    //don't forget to free memory after use it.
    delete[] people; 
    return 0;
}