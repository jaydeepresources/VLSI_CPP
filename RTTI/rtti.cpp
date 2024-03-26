#include <iostream>
using namespace std;

class Printer
{
public:
    virtual void print()
    {
        cout << "Printer: Oldest way of printing a page." << endl;
    }

    void displayPages()
    {
        cout << "Printer: Displays the remaining pages to be printed." << endl;
    }
};

class LaserPrinter : public Printer
{
public:
    void print()
    {
        cout << "LaserPrinter: Fastest way of printing a page." << endl;
    }

    void displayPages()
    {
        cout << "LaserPrinter: Displays the remaining pages along with time remaining." << endl;
    }
};

int main()
{
    // Printer *printer = new LaserPrinter();

    // printer->displayPages();
    // printer->print();

    // LaserPrinter *laserPrinter;
    // laserPrinter = dynamic_cast<LaserPrinter *>(printer);

    // laserPrinter->displayPages();
    // laserPrinter->print();

    Printer *printer2 = new Printer();
    LaserPrinter *laserPrinter2;

    laserPrinter2 = dynamic_cast<LaserPrinter *>(printer2);

    return 0;
}