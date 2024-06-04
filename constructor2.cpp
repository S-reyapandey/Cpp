#include<iostream>
using namespace std;

class Complex{
        int a,b;
        public:
           Complex(int, int); // constructor declaration
           
           void printNumber()
           {
            cout<<"Your number is "<<a<<" + i"<<b<<endl;
           }
};

Complex :: Complex(int x, int y)//---> it is parameterised constructor

{
    a = x;
    b = y;
}

int main()
{
    //implicit call
    Complex c(4,6);
    //Explicit call
    Complex a = Complex(4,6);

    c.printNumber();
    a.printNumber();
    return 0;
}