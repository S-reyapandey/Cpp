#include<iostream>
using namespace std;

template<class T>
class Shreya{
    public:
    T data;
    Shreya(T a)
    {
        data = a;
    }

    void display();
};

template<class T>
void Shreya<T> :: display(){
    cout<<data;
}

void func(int a){
    cout<<"I am first func() "<<a<<endl;
}

template<class T>
void func1(T a){
    cout<<"I am templatised func() "<<a<<endl;
}

int main()
{
   // Shreya<int> h(6);
   // cout<<h.data<<endl;
   // h.display();
     func(4);//exact match takes the highest priority
    return 0;
}