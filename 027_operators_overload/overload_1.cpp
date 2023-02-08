#include <iostream>
using namespace std;

class Complex{
  public:
    int real, img;
  Complex(int real, int img){
    this -> real = real;
    this -> img = img;
  };
  Complex operator+(Complex& c){
    return Complex(this -> real + c.real, this-> img + c.img); 
  }
};

int main(){
  Complex c1(1,2), c2(3,4);
  Complex c3 = c1 + c2;
  cout << "Complex c3 real part: " << c3.real << endl;
  cout << "Complexo c3 imaginary part: " << c3.img << endl;
  return 0;
}