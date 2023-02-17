#include <iostream>
#include <string>
#include <list>

using namespace std;

bool is_pair(const int& n){
  return (n % 2 == 0);
}

bool compair_size(const string& s1, const string& s2 ){
  return (s1.length() < s2.length());
}
int main(){
  list<int> l1;
  list<int> l2(3,10);
  list<int>::iterator it;

  l1.push_back(10);
  l1.push_front(20);
  l1.push_back(30);

  cout << "showing l1 values" << endl;

  for(it = l1.begin(); it != l1.end(); it++){
    cout << *it << endl;
  }

  cout << "showing l2 values" << endl;

  for(it = l2.begin(); it != l2.end(); it++){
    cout << *it << endl;
  }

  cout << "showing first and last element of l1" << endl;
  cout << "first element: " << l1.front() << endl;
  cout << "last element: "<< l1.back() << endl;

  //removind first element of list();
  l1.pop_front();

  cout << "showing first and last element of l1 after pop front" << endl;
  cout << "first element: " << l1.front() << endl;
  cout << "last element: "<< l1.back() << endl;

  // removing the latest element of l1;
  l1.pop_back();

  cout << "showing first and last element of l1 after pop back" << endl;
  cout << "first element: " << l1.front() << endl;
  cout << "last element: "<< l1.back() << endl;

  // removing all element os l2
  cout << "size l2 before clear it: "<<l2.size()<< endl;
  while(!l2.empty()){
    l2.pop_front();

  }
  cout << "size l2 after clear it: "<<l2.size()<< endl;
  // assigning elements to l2
  int vet[] = {1, 2, 3, 4};
  l2.assign(vet , vet+4);

  cout << "New elements of l2" << endl;


  for(it = l2.begin(); it != l2.end(); it++){
    cout << *it << endl;
  }
  // inserting in l2 some element
  l2.insert(l2.begin(),100);
  cout << "elements of l2 after insert 100" << endl;


  for(it = l2.begin(); it != l2.end(); it++){
    cout << *it << endl;
  }
  // insert element on second position
  it = l2.begin();
  it++;

  l2.insert(it,200);
  cout << "elements of l2 after insert 200 as second element" << endl;


  for(it = l2.begin(); it != l2.end(); it++){
    cout << *it << endl;
  }
  // inserting 2 times the same value in the begin
  l2.insert(l2.begin(),2,50);
  cout << "elements of l2 after insert 2 times the element 50" << endl;


  for(it = l2.begin(); it != l2.end(); it++){
    cout << *it << endl;
  }
  // erasering the first 2 elements of l2
  list<int>::iterator it2 = l2.begin();
  it2++;
  it2++;
  l2.erase(l2.begin(), it2);

  cout << "elements of l2 after eraser 2 elements" << endl;

  for(it = l2.begin(); it != l2.end(); it++){
    cout << *it << endl;
  }
  // removing all element os l2
  cout << "size l2 before clear it with clear function: "<<l2.size()<< endl;
  l2.clear();
  cout << "size l2 after clear it with clear function:: "<<l2.size()<< endl;
  
  //function splice, is used to transfer the elements of one list to another one
  list<int> list1(2,10), list2(2,20);
  list1.splice(list1.begin(),list2);
  cout << "Elements of list 1  "<< endl;
  for(it = list1.begin(); it != list1.end(); it++){
    cout << *it << endl;
  }

  cout << "size list2: " <<list2.size() << endl;

  // removing all elementes with the value 20 from list 1
  list1.remove(20);

  cout << "Elements of list 1  after use remove method"<< endl;
  for(it = list1.begin(); it != list1.end(); it++){
    cout << *it << endl;
  }

  // removing unser some condidition
  int vet2[] = {6, 8, 10, 5, 20, 21};
  list<int> list3(vet2, vet2+6);
  cout << " elements of list3 before removing under conditions" << endl;
  for(it = list3.begin(); it != list3.end(); it++){
    cout << *it << endl;
  }
  list3.remove_if(is_pair);
   cout << " elements of list3 after removing under conditions" << endl;
  for(it = list3.begin(); it != list3.end(); it++){
    cout << *it << endl;
  }

  int vet3[] = {17, 60, 5, 30, 50};
  list<int> list4(vet3, vet3+5);
  cout << "elements from list4 before ordenation" << endl; 
  for(it = list4.begin(); it != list4.end(); it++){
    cout << *it << endl;
  }
  cout << "elements from list4 after ordenation" << endl; 
  list4.sort();
  for(it = list4.begin(); it != list4.end(); it++){
    cout << *it << endl;
  }
  list<string> names;
  list<string>::iterator itname;
  names.push_back("Emily");
  names.push_back("Matheus");
  names.push_back("Ian");
  names.push_back("Carlos");
  names.push_back("Fabricio");
  names.push_back("Alexandre");

  cout << "elements from names before ordenation" << endl; 
  for(itname = names.begin(); itname != names.end(); itname++){
    cout << *itname << endl;
  }
  cout << "elements from names after simple ordenation" << endl; 
  names.sort();
  for(itname = names.begin(); itname != names.end(); itname++){
    cout << *itname << endl;
  }
  cout << "elements from names after simple ordenation" << endl; 
  names.sort(compair_size);
  for(itname = names.begin(); itname != names.end(); itname++){
    cout << *itname << "   Tamanho:  "<< (*itname).length() << endl;
  }

  return 0;
}