#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    // below line means that non member - sumComplex function is allowed to do anything with my private elements

    friend Complex sumComplex(Complex o1, Complex o2);
    void printNumber()
    {
        cout << "Your number is " << a << " + i" << b << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setData(1, 4);
    c1.printNumber();

    c2.setData(3, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}

// properties of friend functions
/*
  not is in the scope of class
  since it is not in the scope of the class, it can't be called from the object of that class,  c1.sumComplex() == invalid
  Can be invoked without the help of any object
  ususally  contains the objects as arguments
  can be declared inside public or private section of the class
  it can't access the members directly by their names and need object_name.member_name to access any member


*/