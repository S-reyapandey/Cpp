#include <iostream>

using namespace std;

class Base{
    public:
       Base(){
        cout << "Constructing Base" <<endl;
       }

       //on using virtual keyword in base class destructor it deletes the object of each class 

       virtual ~Base(){                        
        cout << "Destructing Base" << endl;
       }
};

class Derived : public Base{
    public:
       Derived(){
        cout << "Constructive derived" << endl;
       }

       ~Derived(){
        cout << "Destructive derived" << endl;
       }
};

int main() {
    Derived* d = new Derived;
    Base* b = d;
    delete b;
    return 0;
}