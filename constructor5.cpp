#include <iostream>
using namespace std;

class Simple
{
  int data1, data2;

public:
  Simple(int a, int b = 9)
  {
    data1 = a;
    data2 = b;
  }

  void printData();
};

void Simple ::printData()
{
  cout << "The value of data is " << data1 << " and " << data2 << endl;
}

int main()
{
  Simple s(1, 4);
  Simple s1(1); // constructor with default argument
  s1.printData();
  s.printData();
  return 0;
}