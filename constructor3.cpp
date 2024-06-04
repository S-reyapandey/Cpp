#include<iostream>
#include<math.h>
using namespace std;


class Point{
    int x,y;
     public :
        Point(int a, int b){
            x = a;
            y = b;
        }

        void displayPoint(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }
};

int main()
{
    Point p(1,3);
    p.displayPoint();

    return 0;
}