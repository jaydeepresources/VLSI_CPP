#include <iostream>
#include <string>
using namespace std;

template <typename C>
class Exam
{
public:
    C code;

    void print()
    {
        cout << "Code= " << code << endl;
        cout << "Type of Code= " << typeid(C).name() << endl;
    }
};

int main()
{
    Exam<string> exam;
    exam.code = "ME-122";
    exam.print();

    Exam<int> e;
    e.code = 123;
    e.print();

    return 0;
}