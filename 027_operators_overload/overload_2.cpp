#include <iostream>
#include <string.h>
using namespace std;

class Person{
  private:
    char * name;
    int id;
  public:
    void init(const char* newName, int newId){
      name = new char[strlen(newName)+1];
      strcpy(name, newName);
      this -> id = newId;
    }
    void destroy(){
      delete[] name;
      name = 0;
    }
    Person(const char* newName, int newId){
      init(newName,newId);
    }
    Person(Person& p){
      init(p.name , p.id);
    }
    Person& operator=(Person& p){
      if(this != &p){
        destroy();
        init(p.name, p.id);
      }
      return *this;
    }
    ~Person(){
      destroy();
    }
    const char* getName(){
      return name;
    }
    int getId(){
      return id;
    }
    void changeNameCharacter(char l, int position){
      if((position < strlen(name)) && position >= 0){
      name[position] = l;
      }else{
        cout << "invalid position input" << endl;
      }
    }

};

int main(){
  Person me("Matheus", 27) , she("Emily", 24);
  me = she;
  she.changeNameCharacter('c',2);
  cout << "my name is: " << me.getName() << endl;
  cout << "she is: " << she.getName() << endl;
  return 0;
}