#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
       void getData()
       {
        cout<<"The real part is "<<real<<endl;
        cout<<"The imaginary part is "<<imaginary<<endl;
       }
       void setData(int a, int b)
       {
        real = a;
        imaginary = b;
       }
};

int main()
{
    Complex c1;
    Complex *ptr = &c1;
    //Complex *ptr = new Complex;
    c1.setData(3,4);
    //(*ptr).setData(3,4); is exactly same as
    ptr -> setData(3,4);
    (*ptr).getData();
    return 0;
}