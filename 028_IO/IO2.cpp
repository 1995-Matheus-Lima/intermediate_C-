#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(int argcn, char *argv[]){
  fstream file;
  char opc = 'y';
  string name;
  file.open("./028_IO/names.txt",ios::out);
  while((opc == 'y') or (opc == 'Y')){
    cout << "Input a name: ";
    cin >> name;
    file << name << endl;
    cout << "would like to add another name?[Y/N]: ";
    cin >> opc;
    system("clear");
  } 
  file.close();
  file.open("./028_IO/names.txt",ios::in);
  //file.open("./028_IO/names.txt",ios::in|ios::app); use to append text and not overwrite the data
  cout <<" ----------------Input Name List ------------------ " << endl;
  if(file.is_open()){
    string line;
    int i = 1;
    while(getline(file, line)){
      cout << i << "   "<< line << endl;
      i++;
    }
    
  }else{
    cout << "something wrong was not right ... i mean, was not  possible open the archive" << endl;
  }
  file.close();

  return 0;
}