#include <iostream>
using namespace std;

class Circle
{

public:
    int radius;

    void operator++()
    {
        radius++;
    }

    void operator--()
    {
        radius--;
    }
};

int main()
{

    Circle c;
    c.radius = 10;
    ++c;
    // c.radius++;
    cout << c.radius << endl;

    --c;
    cout << c.radius << endl;

    return 0;
}