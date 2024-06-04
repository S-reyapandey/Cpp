#include<iostream>
using namespace std;

class Employee{
     int id;
     int salary;
     public:
        void setId(void)
        {
            salary = 122;
            cout<<"Enter the id of employee "<<endl;
            cin>>id;
        }

        void getId(void)
        {
            cout<<"the id of this employee is "<<id<<endl;
        }
};
int main()
{
   // Employee Shreya, Niyati, Shiwang, Suhani;(if number of employee is much more then use array)
   Employee fb[5];
   for(int i = 0;i<5;i++)
   {
      fb[i].setId();
      fb[i].getId();
   }
    return 0;
}