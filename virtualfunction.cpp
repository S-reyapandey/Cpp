#include <iostream>
using namespace std;

class BaseClass
{
public:
  int var_base = 5;
  virtual void display()
  {
    cout << "Displaying Base class variable jkl var_base " << var_base << endl;
  }
};

class DerivedClass : public BaseClass
{
public:
  int var_derived = 9;
  void display()
  {
    cout << "Displaying Base class variable var_base " << var_base << endl;
    cout << "Displaying Derived class variable var_derived " << var_derived << endl;
  }
};

int main()
{
  BaseClass *base_class_pointer;
  BaseClass obj_base;
  DerivedClass obj_derived;
  //obj_base.display();

  base_class_pointer = &obj_derived;
  base_class_pointer->display(); // it run base class so for running derived we use virtual function for display of base class

  return 0;
}

// virtual function means