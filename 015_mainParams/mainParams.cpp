#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
   // argc quantidade de elementos em argv
   //argv array de strings de caracteres 
   cout << "argc: " << argc << endl;
   cout << "argv[0]: "<< argv[0] << endl; 
   cout << "argv[1]: "<< argv[1] << endl;
    return 0;
}

//run with " a.out "argv1" "