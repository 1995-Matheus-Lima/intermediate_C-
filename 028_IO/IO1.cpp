#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

int main(int argcn, char *argv[]){
  ifstream inFile;
  string line;
  inFile.open("028_IO/dataIn.txt");
  if(inFile.is_open()){
    ofstream outFile;
    outFile.open("028_IO/dataOut.txt") ; 
    while(getline(inFile, line)){
      outFile << line << endl;
      int i = 0;
      while( i < strlen(line.c_str())){
        cout << line[i] << endl;
        i++;
      }
    }
    inFile.close();
    outFile.close();
  }else{
    cout << "Was no possible open this archive" << endl;
  }

  return 0;
}