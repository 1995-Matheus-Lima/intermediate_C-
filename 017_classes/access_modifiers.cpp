#include <iostream>
#include <string.h>
using namespace std;

class Language{
    //protected:
    //public:
    private:
        char name[100];

    public:
    void displayName(){
       cout << "Name: " << name << endl;
    }
    void setName(const char* newName){
        strcpy(this -> name,newName);
    }
};
int main(){
   Language l;
   l.setName("C++");
   l.displayName();
   
    return 0;
}