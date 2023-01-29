#include <iostream>
#include <string.h>

using namespace std;

class Student{
  public:
		char* name;
		int age;
	Student(const char* name){
		int size = strlen(name)+1;
		this -> name = new char[size];
		strcpy(this -> name , name);
		cout << "building object: " << name << endl;
		
	}
	Student(const Student & e){
		int size = strlen(e.name)+strlen("copy of: ") + 1;
		this -> name = new char[size];
		strcpy(this -> name , "copy of: ");
		strcat(this -> name , e.name);
		cout << "building copy of: " <<  e.name << endl;
	}

	const char* getName(){
		return name;
	}
	~Student(){
		cout << "destroing object: " << name << endl;
		delete[] name;
	}
};

void foo(Student e){

};
int main(){
	Student e("Emily");
	foo(e);
	cout << "The name of the most beautiful person on this world is: " << e.getName() << endl;
	return 0;
}