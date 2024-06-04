#include <iostream>
#include <math.h>
using namespace std;

class Point;

class Distance
{
public:
    double diffsq(Point, Point);
};

class Point
{
    int x, y;
    friend class Distance;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
};

double Distance ::diffsq(Point p1, Point p2)
{
         double h, v;
         h = p1.x - p2.x;
         v = p1.y - p2.y;
         return hypot(h, v);
         
}

int main()
{
    Point q1(1, 2), q2(3, 7);
    Distance dis;
    double ans;
    ans = dis.diffsq(q1, q2);

    cout << "The distance between the points q1 and q2 is " << ans << endl;
    return 0;
}

// hypot(x, y)	Returns sqrt(x2 +y2) without intermediate overflow or underflow