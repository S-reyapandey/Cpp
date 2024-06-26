#include<iostream>
using namespace std;

/*
CLASS TEMPLATES WITH MULTIPLE PARAMETERS (ONE, TWO OR MORE THEN TWO)
template<class T1, class T2......(COMMA SEPARATED)>
class nameofclass{

}
*/
template<class T1, class T2>

class myClass{
    public:
        T1 data1;
        T2 data2;
        
        myClass(T1 a, T2 b)
        {
            data1 = a;
            data2 = b;
        }

        void display(){
            cout<<this->data1<<" "<<this->data2;
        }
};



int main()
{
    myClass <int, float> obj(1,5.89);
    obj.display();
    return 0;
}