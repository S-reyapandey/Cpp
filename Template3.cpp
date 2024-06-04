#include<iostream>
using namespace std;

template<class T1=int, class T2=float, class T3=char>

class Shreya {
    public:
       T1 a;
       T2 b;
       T3 c;
       Shreya(T1 x, T2 y, T3 z){
        a = x;
        b = y;
        c = z;
       }

       void Display()
       {
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
       }
};

int main()
{
    Shreya<> h( 2, 5.2, 'c');
    h.Display();
    Shreya<float, char, char> g(1.4, 'o', 'c');
    g.Display();
    return 0;
}