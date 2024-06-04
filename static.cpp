#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count; //static variable 

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }

    static void getCount(void)
    {
        // cout<<id; //throw an error
        cout << "The value of count is " << count << endl;
    }
};

int Employee ::count; // Default value is 0 also declaring static variable it tells that this is static member
int main()
{
    Employee Shreya, Shiwang, Khushi;
    // count is the static data member
    // Shreya.id = 1;
    // Shreya.count = 1; // can't do this as id and count are private
    Shreya.setData();
    Shreya.getData();
    Employee::getCount(); // accessing static member

    Shiwang.setData();
    Shiwang.getData();
    Employee::getCount();

    Khushi.setData();
    Khushi.getData();
    Employee::getCount();
    return 0;
}