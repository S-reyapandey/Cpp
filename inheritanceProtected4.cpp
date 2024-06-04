#include<iostream>
using namespace std;

class Base{
    protected : // if u want to make a element private but to be inherited
      int a;
    private :  // if element is private fully means for whole program
      int b;
};

/* For a protected member:
                  
                      Public derivation   Private derivation   Protected Derivation 
  1.Private members       Not inherted       Not inherited         Not inherited
  2.Protected members     Protected          Private               Protected
  3.Public members        Public             Private               Protected
*/

class Derived : protected Base{
     
};

int main()
{
    Base b;
    Derived d;
    //cout<<d.a;// will not work as 'a' is protected in both base as well as derived
    return 0;
}