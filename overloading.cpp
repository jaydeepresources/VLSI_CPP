#include <iostream>
using namespace std;

class AreaFinder
{

public:
    float area;

    // area of circle
    void calcArea(float radius)
    {
        area = 3.14 * radius * radius;
        cout << "Area of circle= " << area << "\n";
    }

    // area of square
    void calcArea(int side)
    {
        area = side * side;
        cout << "Area of square= " << area << "\n";
    }

    // area of rectangle
    void calcArea(int length, int breadth)
    {
        area = length * breadth;
        cout << "Area of rectangle= " << area << "\n";
    }
};

int main()
{
    AreaFinder a;
    a.calcArea(12);
    a.calcArea(1.2f);
    a.calcArea(3, 2);

    return 0;
}