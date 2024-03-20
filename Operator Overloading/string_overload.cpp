#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    string firstName;
    string lastName;

    string operator+()
    {
        string name = "";
        name = firstName.append(lastName);
        return name;
    }
};

int main()
{

    Employee e = Employee();

    e.firstName = "John";
    e.lastName = "Doe";

    string name = e.firstName + e.lastName;

    cout << "Full Name=" << name << endl;

    return 0;
}