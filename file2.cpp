#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    //connecting our file with hout stream
    ofstream hout("sample.txt");

    //creating a name string and filling it with the string entered by the user
   
     string name;
    cout<<"Enter ur name ";
    cin>>name;

    //writing a string to the file
    hout<<"My name is " + name;

    hout.close();

    ifstream hin("sample.txt");
    string content;
    hin>>content;
    cout<<"The content if this file is: "<<content;
    hin.close();
    return 0;
}