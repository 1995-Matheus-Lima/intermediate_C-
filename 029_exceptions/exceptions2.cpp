#include <iostream>
#include <string.h>
#include <exception>
using namespace std;

class CustomException : public exception{
  protected:
    char msg[100];
  public:
    CustomException(const char* e)
    {
      strcpy(msg, e);
    }
    virtual const char* what(){
      return msg;
    }
};
int fat(int n){
  if(n<0){
    throw CustomException("Negative number is not allowed!!");
  }
  if (n == 0 || n == 1){
    return 1;
  }
  else{
    return n * fat(n - 1);
  }
}
int main(){
  int fat_;
  cout <<"********* LET CALC FACTORIAL ****************" << endl;
  cout <<"number to calc try: ";
  cin >> fat_;
  try{
  cout << "The factorial of " <<fat_ << " is : "<<fat(fat_)<< endl;
  }
  catch(CustomException e){
    cerr << "Error: " << e.what() <<endl;
  }
  catch(...){
    cerr << "Erro inesperado." << endl;
  }

  return 0;
}