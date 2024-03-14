#include <iostream>
#include <string>
using namespace std;

class Employee
{
public:
    int id;
    string name;
    float salary;

    Employee()
    {
        id = 0;
        name = "";
        salary = 0;
    }

    Employee(int id, string name, float salary)
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }

    Employee(Employee &e)
    {
        id = e.id;
        name = e.name;
        salary = e.salary;
    }

    ~Employee()
    {
        cout << "Killing Object." << endl;
    }

    void print()
    {
        cout << "Id=" << id << endl;
        cout << "Name=" << name << endl;
        cout << "Salary=" << salary << endl;
    }
};

int main()
{

    Employee e1;

    e1.id = 10;
    e1.name = "John Doe";
    e1.salary = 12345.6;

    // e1.print();

    Employee e2(2, "Jane Doe", 12346.7);
    // e2.print();

    Employee e3(e2);
    e3.print();

    Employee *e4 = new Employee();

    delete (e4);

    return 0;
}