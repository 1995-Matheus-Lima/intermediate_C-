#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

int main(){
  vector<string> names;

  names.push_back("Matheus");
  names.push_back("Emily");
  names.push_back("Erika");

  //  int tam = names.size();
  //  for(int i = 0; i< tam; i++){
  //   cout <<names[i] << endl;

  //iterador
  // [names.begin() , names.end())    // close in begin and open  in end 
  vector<string>::iterator it ;
  for(it = names.begin(); it < names.end(); it++){
    cout << *it << endl;
  }

  return 0;
}