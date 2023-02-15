#include <iostream>
#include <vector>
#include <string.h>
using namespace std;

void isEmpty( vector<auto> v){
  if(v.empty())
  {
    cout << "vector is empty!!!" << endl;
  }
  else
  {
    cout << "Vector isn't empty" << endl;
  }
}
int main(){
  vector<string> names;
  if(names.empty())
  
  isEmpty(names);

  names.push_back("Matheus");
  names.push_back("Emily");
  names.push_back("Erika");

  isEmpty(names); 
  
  // while(!names.empty())
  // {
  //   names.pop_back();
  // }

  // isEmpty(names); 
  // names.front() return the first element
  // names.front() return the last element
  cout << names.front() << endl;
  cout << names.back() << endl;

  // insert 
   vector<string>::iterator it = names.begin();
  // names.insert(it+2, "Guilherme");
  //

  //erase 

//  for(it = names.begin() ; it < names.end(); it++){
//     cout << *it << endl;
//     }
//   names.erase(names.begin());
//   cout << "after Erase" << endl;
//   for(it = names.begin() ; it < names.end(); it++){
//     cout << *it << endl;
//   }

  //swap 
  // vector<int > a(2,20);
  // vector<int > b(3,10);

  // a.swap(b);
  // for(unsigned int i = 0; i< a.size(); i++){
  //   cout << a[i] << endl;
  // }
  // for(unsigned int i = 0; i< b.size(); i++){
  //   cout << b[i] << endl;
  // }
  cout << "names size: " << names.size() <<endl;
  names.clear();
  cout << "names size after clear: " << names.size() <<endl;
  //clear
  return 0;
}