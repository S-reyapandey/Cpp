#include <iostream>
#include <cmath>
using namespace std;
/*
Create 2 classes:
  1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +,-,*,/ and display the result using another function
  2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operation of ur choice and displays the results using another function.

  create another class HybridCalculator and inherit it using these 2 classes:
  Q1: What type of inheritance are u using?
  Q2: Which mode of inheritance are u using?
  Q3: Create an object of HybrideCalculator and display results of simple and scientific calculator
  Q4: How is code reusability implemented?
*/

class SimpleCalculator
{
  float a, b;

public:
  void set_numbers(float x, float y)
  {
    a = x;
    b = y;
  }
  void process1()
  {
    cout << "The sum of the numbers are: " << a + b << endl;
    cout << "The difference of the numbers are: " << a - b << endl;
    cout << "The mutiplication of numbers are: " << a * b << endl;
    cout << "The division of numbers are: " << a / b << endl;
  }
};

class ScientificCalculator
{
  float c, d;

public:
  void set_data(float w, float z)
  {
    c = w;
    d = z;
  }
  void process2()
  {
    cout << "The square root of the numbers c and d are as follow :" << sqrt(c)<<" , "<<sqrt(d)<<endl;
    cout<<"The square of numbers c and d are "<<c*c<<" , "<<d*d<<endl;
    cout<<"The logarithm of numbers c and d are "<<log(c)<<" , "<<log(d)<<endl;
    cout<<"The value of c to the power d is: "<<pow(c,d)<<endl;
  }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
  public:
     void result(float i, float j)
     {
        SimpleCalculator :: set_numbers(i, j);
        SimpleCalculator :: process1();
        ScientificCalculator :: set_data(i, j);
        ScientificCalculator :: process2(); 
     }
       
};

int main()
{
  HybridCalculator answer;
  answer.result(3.0,4.0);
  return 0;
}