#include <iostream>
using namespace std;

template <typename T> // defining imaginary D.T
T add(T a, T b)
{
    return a + b;
}

int main()
{
    cout << "Adding ints, result = " << add(10, 20) << endl;
    cout << "Adding chars, result = " << add('A', 'B') << endl;
    cout << "131 ASCII = " << ((char)131) << endl;
    return 0;
}