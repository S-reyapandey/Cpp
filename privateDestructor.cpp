#include <iostream>

using namespace std;

class Test{
    private:
       ~Test(){}
    public:
       friend void destructorTest(Test*);
};

void destructorTest(Test* ptr) {
    delete ptr;
}


int main(){
    //Test t; //gives error bcz destructor is private
    //Test* t; //works fine


    Test* t = new Test;
   // delete t; //gives error bcz destructor is private  -> so to avoid this friend destructor function is used to delete the object
   destructorTest(t);
    return 0;
}