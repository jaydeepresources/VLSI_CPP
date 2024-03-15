#include <iostream>
#include <string>
using namespace std;

class Employee
{

private:
    int id;
    string name;
    float salary;

public:
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

    int getId()
    {
        return id;
    }

    string getName()
    {
        return name;
    }

    float getSalary()
    {
        return salary;
    }

    void setId(int id)
    {
        this->id = id;
    }

    void setName(string name)
    {
        this->name = name;
    }

    void setSalary(float salary)
    {
        this->salary = salary;
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
    e1.setId(10);
    e1.setName("John Doe");
    e1.setSalary(12345.6);

    cout << "Printing all the details" << endl;
    e1.print();

    cout << "Printing id:" << e1.getId() << endl;

    return 0;
}