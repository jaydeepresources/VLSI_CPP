#include <iostream>
using namespace std;

class Foo
{
public:
    int bar;
};

void changeBarPtr(Foo *foo)
{
    // (*foo).bar++;
    foo->bar++; // arrow operator
    cout << "Bar from changeBarPtr = " << (*foo).bar << endl;
}

void changeBar(Foo &foo)
{
    foo.bar++;
    cout << "Bar from changeBar = " << foo.bar << endl;
}

int main()
{

    Foo f;
    f.bar = 10;

    cout << "Bar before= " << f.bar << endl;
    // changeBar(f);
    changeBarPtr(&f);
    cout << "Bar after= " << f.bar << endl;
}