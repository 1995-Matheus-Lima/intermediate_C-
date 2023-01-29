#include <iostream>
#include <string.h>

using namespace std;
class Person{
	protected:
		char name[100];
		int age;
		int* accounts;
	public:
		Person(const char* name,int age){
			strcpy(this -> name , name);
			this -> age = age;
			this -> accounts = new int[100];
			cout << "countructor is working!: " << name << endl;
		}
		void displayName(){
			cout << "Name: " << name <<endl;
		}
		void displayAge(){
			cout << "Age: " << age <<endl;
		}
		char * getName(){
			return name;
		}
		int getAge(){
			return age;
		}
		~Person(){
			delete [] accounts;
			cout << "destructor is working!: " << name << endl;
		}
};
int main(){
  Person brothers[6] = {{"Thais",37},{"junior",28},{"maiara",24},{"viny",24},{"cainan",21},{"caleb",3}};
	int i = 0;
	cout << "----- Brothers ------" << endl;
	while(i < 6){
		brothers[i].displayName();
		i++;
	}
  return 0;
}