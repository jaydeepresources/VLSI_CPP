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
};

int main()
{

    Circle c;
    c.radius = 10;
    ++c;
    // c.radius++;
    cout << c.radius;
    return 0;
}