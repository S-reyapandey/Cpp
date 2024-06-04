#include <iostream>
using namespace std;

// Forward Declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(Complex, Complex);
    void subtractComplex(Complex, Complex);
    void sumComplex(Complex, Complex);
    void multiplyComplex(Complex, Complex);
};

class Complex
{
    int a, b;
    // declaring for individual part to become friend
    // friend int Calculator :: sumRealComplex(Complex o1, Complex o2);
    // friend int Calculator :: subtractComplex(Complex o1, Complex o2);
    // friend int Calculator :: sumComplex(Complex o1, Complex o2);
    // friend int Calculator :: multiplyComplex(Complex o1, Complex o2);

    // Aliter : make the whole class calculator friend
    friend class Calculator;

public:
    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    // below line means that non member - sumComplex function is allowed to do anything with my private elements
    /*void setDataBySum(Complex o1, Complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }*/

    void printNumber()
    {
        cout << "Your number is " << a << " + i" << b << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

void Calculator ::sumComplex(Complex o1, Complex o2)
{
    int c, d;
    c = o1.a + o2.a;
    d = o1.b + o2.b;
    cout << "The sum of the complex number is " << c << " + i" << d << endl;
    // return (c,d);
}

void Calculator ::subtractComplex(Complex o1, Complex o2)
{
    int c, d;
    c = o1.a - o2.a;
    d = o1.b - o2.b;
    cout << "The subtraction of the complex number is " << c << " + i(" << d << ")" << endl;
}

void Calculator ::multiplyComplex(Complex o1, Complex o2)
{
    int c, d;
    c = (o1.a * o2.a) - (o1.b * o2.b);
    d = (o1.a * o2.b) + (o1.b * o2.a);
    cout << "The multiplication of the complex number is " << c << " + i" << d << endl;
}

int main()
{
    Complex o1, o2;
    o1.setData(12, 5);
    o2.setData(9,0);
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    int ans = calc.add(2, 5);
    // int sum = calc.sumComplex(o1,o2);
    // int sub = calc.subtractComplex(o1,o2);
    // int mul = calc.multiplyComplex(o1,o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    cout << "The addition of the numbers " << ans << endl;
    // cout<<"The sum of complex number is "<<calc.sumComplex(o1,o2)<<endl;
    calc.sumComplex(o1, o2);
    calc.subtractComplex(o1, o2);
    calc.multiplyComplex(o1, o2);
    // cout<<"The subtraction of complex number is "<<sub<<endl;
    // cout<<"The multiplication of complex numbers is "<<mul<<endl;
    return 0;
}