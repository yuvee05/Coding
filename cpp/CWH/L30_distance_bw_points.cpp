#include <iostream>
#include <math.h>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout << "The point is (" << x << ", " << y << ")" <<endl;
    }
    friend double dist(Point , Point);

};

double dist(Point p1, Point p2)
{
    return sqrt(pow(p1.x - p2.x , 2) + pow(p1.y - p2.y , 2));
}

int main()
{
    Point p(1,0);
    Point q(70,0);
    cout << "Distance between these two points: " << dist(p,q) << endl;
    return 0;
}