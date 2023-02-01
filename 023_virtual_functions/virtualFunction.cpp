#include <iostream>
#include <string.h>
using namespace std;

class Mother{
  public:
    // with the reserved world virtual, the c++ will decide with function to use in execution
    virtual void showMessage(){
      cout << "i'm the mother class!" << endl;
    }
};


class Children : public Mother{
  public:
    virtual void showMessage(){
      cout << "i'm the children class!" << endl;
    }
};

void foo(Mother *p){
  p -> showMessage();
}
int main(){
  Mother mom;
  Children boy;
  mom.showMessage();
  boy.showMessage();
  foo(&mom);
  foo(&boy);
  return 0;
}