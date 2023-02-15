#include <iostream>
#include <string.h>

using namespace std;

int fat(int n){
  if(n<0){
    throw "Negative number is not allowed!!";
  }
  if (n == 0 || n == 1){
    return 1;
  }
  else{
    return n * fat(n - 1);
  }
}
//try  catch throw

int main(){
  int fat_;
  cout <<"********* LET CALC FACTORIAL ****************" << endl;
  cout <<"number to calc try: ";
  cin >> fat_;
  try{
  cout << "The factorial of " <<fat_ << " is : "<<fat(fat_)<< endl;
  }
  catch(const char* e){
    cerr << "Error: " << e <<endl;
  }
  catch(...){
    cerr << "Erro inesperado." << endl;
  }

  return 0;
}