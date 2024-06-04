#include<iostream>
using namespace std;
/*
Syntax for initialization list inn constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/
class Test{
    int a;
    int b;
    
    public:
        // Test(int i, int j) : a(i), b(j)
        //Test(int i, int j) : a(i), b(i+j)
        //Test(int i, int j) : a(i) , b(2*j)
        //Test(int i, int j) : a(i), b(a+j) //executed
        //Test(int i, int j) : b(j), a(i+b)//this will create problem bcz a will be initialized 1st
        Test(int i, int j) 
        {
            a = i;
            b = j;
            cout <<"Constructor executed"<<endl;
            cout<<"Value of a is "<<a<<endl;
            cout<<"Value of b is "<<b<<endl;
        }
};

int main()
{
    Test t(4,5);
    return 0;
}