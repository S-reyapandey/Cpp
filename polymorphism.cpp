#include<iostream>
using namespace std;

class BaseClass{
      public:
          int var_base;
          void display(){
            cout<<"Displaying Base class variable var_base "<<var_base<<endl;
          }
};

class DerivedClass : public BaseClass{
       public: 
          int var_derived;
          void display(){
            cout<<"Displaying Base class variable var_base "<<var_base<<endl;
            cout<<"Displaying Derived class variable var_derived "<<var_derived<<endl;
          }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;//means base class ka pointer indicate kar sakta hai derived class ke pointer ko
    //but display sirf baseclass ka hoga 

    base_class_pointer->var_base = 34;
    base_class_pointer->display(); //known as lead binding
    //base_class_pointer->var_derived = 13;//throw errror 
    //run - time polymorphism example
    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 89;
    derived_class_pointer->var_derived = 67;
    derived_class_pointer->display();
    return 0;
}

/*
polymorphism = many forms
->one name and multiple forms
->eg - function overloading
compile time polymorphism = obtain by function overloading , operator overloading=early binding 
run time polymorphism = obtain by virtual function

pointer to derived class=>
   
*/