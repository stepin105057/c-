/**
Fill the following skeleton code with implementation of Complex number
as template class

Complex class should support following operations
* Default constructor
* Parameterized Constructor
* get real part
* get imaginary part
* operator+, to support c1+c2
* operator==, to compare c4,c5
* display function (part of skeleton,don't change)

Sample Input:-
1 2
2 5
5 6
5 7
Expected Output:-
3+8i
1,2
2,5
2,8
not equal

Don't add any other cin,cout statement which will impact test cases. Also please
don't change main function, focus on MyTime class implementation

For custom input you can provide 8 integers (4 pairs) to construct four complex
objects - c1, c2, c3 and c4
*/

//TODO:template syntax
#include<iostream>
using namespace std;
template <typename T>
class Complex {
  T real;
  T imag;//TODO: data members : real, imag
public:
  Complex():real{0},imag{0}{}//TODO: default constructor
  Complex(T r,T i):real{r},imag{i}{}//TODO: parameterized constructor
  getReal()
  {
      return real;
  }//TODO: function to get real part
  getImag()
  {
      return imag;
  }//TODO: function to get imaginary part
  Complex operator +(const Complex &rhs)
  {
      T cr=real+rhs.real;
      T ci=imag+rhs.imag;
      return Complex(cr,ci);
      }//TODO: operator+, for addition of two complex objects
   bool operator ==(const Complex &rhs)
   {
       return(real==rhs.real && imag==rhs.imag);
   }
  void display() const {
    std::cout << real << "+" << imag << "i" << "\n";
  }
};
int main() {
  int r1,i1,r2,i2;
  std::cin >> r1 >> i1 >> r2 >> i2;
  Complex<int> c1(r1, i1);
  Complex<int> c2(r2, i2);
  Complex<int> res;
  res = c1 + c2;
  res.display();
  std::cout << c1.getReal() << "," << c1.getImag() << "\n";
  std::cout << c2.getReal() << "," << c2.getImag() << "\n";
  std::cout << res.getReal() << "," << res.getImag() << "\n";
  int r3,i3,r4,i4;
  std::cin >> r3 >> i3 >> r4 >> i4;
  Complex<int> c3(r3,i3);
  Complex<int> c4(r4,i4);
  if(c3==c4)
    std::cout << "equal\n";
  else
    std::cout << "not equal\n";
  return 0;
}
