#include <iostream>
#include <string>
using namespace std;

class Box
{
public:
    int l;
    int b;

    Box()
    {
    }

    Box(int l, int b)
    {
        this->l = l;
        this->b = b;
    }

    Box operator+(Box &obj)
    {
        Box c;
        c.l = this->l + obj.l;
        c.b = this->b + obj.b;

        return c;
    }
};

int main()
{

    Box b1(10, 5);
    Box b2(20, 15);

    Box b3 = b1 + b2;

    cout << "l=" << b3.l << endl;
    cout << "b=" << b3.b << endl;

    return 0;
}