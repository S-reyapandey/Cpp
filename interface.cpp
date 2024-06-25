#include <iostream>
using namespace std;

class Shape{
    public: 
      virtual double getarea() = 0;
      virtual double getperimeter() = 0;
};

class Circle : public Shape {
    double radius;
    public:
       Circle (double r): radius(r) {};

       double getarea() {
        return 3.14159265359*radius*radius;
       }

       double getperimeter() {
        return 2*3.14159265359*radius;
       }
};

class Rectangle : public Shape {
    double length, width;
    public:
       Rectangle (double l, double w) : length(l), width (w) {};

       double getarea(){
        return length * width;
       } 

       double getperimeter() {
        return 2 * (length + width);
       }
};

int main() {

    Shape* sh;
    Circle c(5.0);
    Rectangle r(4.0, 5.0);
    sh = &c;
    cout << "Circle area: " << sh->getarea() << endl;
    cout << "Circle perimeter: " << sh->getperimeter() << endl;

    sh = &r;
    cout << "Rectangle area: " << sh->getarea() << endl;
    cout << "Rectangle perimeter: " << sh->getperimeter() << endl;


    return 0;
}