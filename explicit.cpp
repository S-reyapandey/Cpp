#include <iostream>

using namespace std;

class Complex{
    double real, img;
    public:
       explicit Complex (double r = 0.0, double i = 0.0) : real(r), img(i) {}

       bool operator == (Complex c){
        return (real == c.real && img == c.img);
       }
};




int main() {
    
    Complex c1(3.0, 0.0);

     //  if a class has a constructor which can be called with a single argument, then this constructor becomes a conversion constructor because such a constructor allows conversion of the single argument to the class being constructed. In this case, when com1 == 3.0 is called, 3.0 is implicitly converted to Complex type because the default constructor can be called with only 1 argument because both parameters are default arguments and we can choose not to provide them.

     //We can avoid such implicit conversions as these may lead to unexpected results. We can make the constructor explicit with the help of an explicit keyword.

    if(c1 == (Complex)3.0){                   
        cout << "Same" << endl;
    }
    else {
        cout << "Not same" << endl;
    }

    return 0;
}