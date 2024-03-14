#include <iostream>
using namespace std;

class Employee
{
public:
    int id;
    char name[50];
    float basic;
    float hra;
    float da;
    float ta;
    float salary;

    void calculateSalary()
    {
        hra = basic * 0.18;
        da = basic * 0.12;
        ta = basic * 0.05;

        salary = basic + hra + da + ta;
    }

    void print()
    {
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Basic: " << basic << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "TA: " << ta << endl;
        cout << "Salary: " << salary << endl;
    }
};

class SalaryIncrement
{
public:
    // Employee increaseSalary(Employee emp)
    // {
    //     emp.basic += emp.basic * 0.10;
    //     emp.calculateSalary();
    //     return emp;
    // }

    // void increaseSalary(Employee *emp)
    // {
    //     emp->basic += emp->basic * 0.10;
    //     emp->calculateSalary();
    // }

    void increaseSalary(Employee &emp)
    {
        emp.basic += emp.basic * 0.10;
        emp.calculateSalary();
    }
};

int main()
{
    Employee e1;
    SalaryIncrement si;

    cout << "Enter id, name and basic salary for employee" << endl;
    cin >> e1.id >> e1.name >> e1.basic;

    e1.calculateSalary();

    cout << "Original Salary" << endl;
    e1.print();

    cout << "New Salary" << endl;
    // pass by value
    // e1 = si.increaseSalary(e1);

    // pass by address
    // si.increaseSalary(&e1);

    // pass by reference
    si.increaseSalary(e1);
    e1.print();

    return 0;
}