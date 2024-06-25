#include <iostream>

using namespace std;

class Base {
    public:

      virtual ~Base() = 0;   // pure virtual destructor
};

Base :: ~Base (){     // explicitly destructor call
    cout << "Base destructor called" << endl;
}

class Derived : public Base {
    public: 
      
      ~Derived() {
        cout << "Derived destructor called" << endl;
        }
};


int main(){

    Base* b = new Derived;
    delete b;

    return 0;
}