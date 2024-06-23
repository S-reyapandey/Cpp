#include<iostream>
using namespace std;

class Base1{
    public: 
      void greet(){
        cout<<"How are you.."<<endl;
      }
};

class Base2{
    public:
        void greet(){
            cout<<"kaise ho..?"<<endl;
        }
};

class Derived : public Base1, public Base2{
    int a;
    public:
        void greet(){
            Base2 :: greet();
        }
};

class B{
    public:
      void say()
      {
          cout<<"Hello everyone"<<endl;
      }
};

class D : public B{
     int a;
     //D's new say() method will override base class's say() method
     public:
         void say()
         {
            cout<<"Hello my beautiful people..."<<endl;
         }
};

int main()
{
    
    //Ambuiguity 1
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    Derived dc;
    dc.greet();
    
   B b;
   b.say();

   D d;
   d.say();
   return 0;
}

/*
During inheritance if same function is present in different classes then to specify that which class function we have to use is called ambiguity resolution 

*/