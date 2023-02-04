#include <iostream>
#include <string>

using namespace std;

void displayString(const char* str){
  cout << "Display it please: " << str << endl; 
}
int main(){
  string name = "Matheus Henrique";
  // cout <<"Name: " <<name << endl;
  // cout <<"size name using size: " << name.size() << endl;
  // cout <<"size name using length: " << name.length() << endl;
  // cout <<"character at 3 position on name: " << name.at(3) << endl;
  // cout <<"last Character using back: " << name.back() << endl;
  // cout <<"first character using front: " << name.front() << endl;
  // name.append(" dos Santos Lim");
  // cout <<"Name after append the string  'dos Santos Lim': " <<name << endl;
  // name.push_back('a');
  // cout <<"Name after append the character a: " <<name << endl;
  //inset a string without replace the previous string, puting the string on x° position
  // name.insert(0, "my full name is -> ");
  // cout << "after insert: " << name << endl;
  // name.insert(name.size(), " you can call me math if you wanna  <3");
  // cout << "after insert 2: " << name << endl;
  // name.erase(name.size()-37,name.size());
  // cout << "after half erase: " << name << endl;
  // cout << "name is void?: " << (name.empty()?"Yes":"No") << endl;
  // cout << " ------------- after clear name----------" << endl;
  // name.clear();
  // cout << "name is void?: " << (name.empty()?"Yes":"No") << endl;
  // we  can user .c_srt() to convert string to char *
  // displayString(name.c_str());
  // name.clear();
  // cout << "insert a string bigger than 6 characteres: ";
  // cin >> name;
  // cout << name << endl;
  // name.replace(0,3,"'this sentence was replaced in you name'");
  // cout << "name after replace: "<< name << endl;
  string sub;
  cout << "Which substring would you find in name?: ";
  getline(cin,sub);
  size_t finded = name.find(sub);
  if(finded != string::npos){
    cout << sub << " was finded in " << name << endl;
  }else{
    cout << sub << " Was not found in " << name << endl;
  }
  return 0;
}