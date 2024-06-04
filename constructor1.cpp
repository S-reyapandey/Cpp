#include<iostream>
using namespace std;

class Complex{
        int a,b;
        public:
           //creating a constructor
           //Constructor is a special member function with the same name as of class.It is automatically invoked
           // it is used to initialise the objects of its class
          
           Complex(void); // constructor declaration
           
           void printNumber()
           {
            cout<<"Your number is "<<a<<" + i"<<b<<endl;
           }
};

Complex :: Complex(void)// ---> it is a default constructor as it takes no parameters

{
    a = 10;
    b = 0;
}

int main()
{
    Complex c;
    c.printNumber();
    return 0;
}

//Properties of constructor
// It should be declared in public section
//they can't return values and do not have return types
// it can have default arguments
// we can't refer to their address