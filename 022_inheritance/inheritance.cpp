#include <iostream>
#include <string.h>

using namespace std;
class Animal{
  protected:
    char* name;
    bool fly;  
    int paws;

  public:
    Animal(const char * name, bool  fly = true, int paws = 4){
      this -> name = new char[strlen(name) + 1];
      strcpy(this -> name, name);
      this -> fly = fly;
      this -> paws = paws;
    }
    ~Animal(){
      delete[] name;
    }
    char* getName(){
      return name;
    }
    bool fly_(){
      return fly;
    }
    int getNumberOfPaws(){
      return paws;
    }
};

class Dog : public Animal{
  protected:
    int age;
  public:
    Dog(const char * name, bool  fly, int paws, int age): Animal(name,fly,paws){
      this -> age = age;
    }
    int getAge(){
      return age;
    }
    void auAu(){
      cout << "Au Au"<< endl;
    }
};

int main(){
   Dog audi("audi", false, 4, 1);
   cout << "Name: " << audi.getName() << endl;
   cout << "Can fly?: " << ((!audi.fly_())?("no"):("yes")) << endl;
   cout << "Number of Paws: " << audi.getNumberOfPaws() << endl;
   cout << "Age: " << audi.getAge() << endl;
   audi.auAu();
  return 0;
}