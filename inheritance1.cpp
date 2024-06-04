#include<iostream>
using namespace std;

//Base class
class Employee{
   
     //float salary;
     public:
       int id;
       float salary;
        Employee(int inpId){
            id = inpId;
            salary = 34.0;
        }
        Employee(){}
};

//Derived class
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
   class members/methods/etc....
} // namespace name

Default visiblity mode is private
In private Visibility mode public members of Base class become Private member of derived class
In public inheritance public is public 
private member are never inherited
*/

//Creating a Programmer class derived from Employee class

class Programmer : public Employee{
    public:
        Programmer(int inpId)
        {
            id = inpId;
        }
        int languageCode = 9;
        void getData()
        {
            cout<<id<<endl;
        }
};

int main()
{
    Employee shreya(1),shiwang(2);
    cout<<shreya.salary<<endl;
    cout<<shiwang.salary<<endl;
    Programmer skillF(10);
    cout<<skillF.languageCode<<endl;
    skillF.getData();
    //cout<<skillF.id; = don't give result bcz we privativately inherit the derived class
    cout<<skillF.id<<endl;
    return 0;
}