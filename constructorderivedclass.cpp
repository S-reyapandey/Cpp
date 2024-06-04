#include<iostream>
using namespace std;

/*
Case 1:
class B: public A{
    //Order of execution of constructor -> first A() then B()
};

Case 2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case 3:
class A : public B,virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};
*/

class Base1{
      int data1;
      public:
         Base1(int i){
             data1 = i;
             cout<<"Base1 class constructor called"<<endl;
         }
        void printDataBase1(void){
            cout<<"The value of data1 is "<<data1<<endl;
        }  
};

class Base2{
       int data2;
      public:
         Base2(int i){
             data2 = i;
             cout<<"Base2 class constructor called"<<endl;
         }
        void printDataBase2(void){
            cout<<"The value of data2 is "<<data2<<endl;
        }     
};

class Derived : public Base1, public Base2{
     int derived1, derived2;
     public:
          Derived(int a, int b, int c, int d) : Base1(a), Base2(b){
            derived1 = c;
            derived2 = d;
            cout<<"Derived class constructor called"<<endl;
          }

          void printDataDerived(void)
          {
            cout<<"The value of derived1 is "<<derived1<<endl;
            cout<<"The value of derived2 is "<<derived2<<endl;
          }
};

int main()
{
    Derived shreya(1,2,3,4);
    shreya.printDataDerived();
    shreya.printDataBase1();
    shreya.printDataBase2();
    return 0;
}

/*
->we can use constructor in derived class in C++
->if base class constructor does not have any arguments, there is no need of any constructor in DC.
->But if there are one or more arguments in the BC constructor, DC need to pass argument to the BC constructor
->If both BC and DC have constructors, base class constructoe is executed 1st.
->In multiple inheritance, Base classes are constructed in the order in which they appear in the class declaration.
->In multilevel inheritance, the constructors are executed in the order of inheritance.
->C++ supports an special syntax for passing arguments to multiple base class
->The cconstructor of the DC receives all the argument at once and then will pass the calls to the respective BC
->The body is called after all the constructors are finished executing

Derived-Constructor(arg 1, arg 2, arg 3,..): Base 1-Constructor(arg1,arg2),Base 2-Constructor(arg3,arg4){
    ...
}Base1-Constructor(arg1, arg2)

-> The constructors for virtual base classes are invoked before an nonvirtual BC
-> If there are multiple virtual BC, they are invoked in the order declared.
-> Any non-virtual BC are then constructed before the derived class constructor is executed

*/