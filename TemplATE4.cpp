#include<iostream>
using namespace std;

//float funcAverage(int a, int b){
  //  float avg = (a + b)/2;
    //return avg;
//}

//float funcAverage2(int a, float b){
  //  float avg = (a + b)/2.0;
   // return avg;
//}



template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a + b)/2.0;
    return avg;
}

int main()
{
    float a;
    a = funcAverage(5,3);
    cout<<"The average of these numbers is  "<<a<<endl;
    return 0;
}