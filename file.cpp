#include<iostream>
#include<fstream>

/*
The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase

in order work with files in c++, u will have to open it.Primarily, there are 2 ways to open a file:
1. Using the constructor
2. Using the member function open() of the class
*/
using namespace std;



int main()
{
    string st = "Shreya Pandey";
    string st2;
    //opening files using constructor
    ofstream out("sample.txt");//write operation
    out<<st;

    //opening files using constructor and reading it
    ifstream in("sampleb.txt");//read operation
    //in>>st2;//it read only letters until space is not coming
    // so to read whole line we use getline function
    getline(in, st2);
    cout<<st2;
    return 0;
}