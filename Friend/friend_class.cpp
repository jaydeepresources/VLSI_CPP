#include <iostream>
using namespace std;

class Item
{
private:
    float price;

public:
    Item()
    {
    }

    Item(float price)
    {
        this->price = price;
    }

    friend class Discount;
};

class Discount
{
public:
    void print(Item &item)
    {
        cout << "Discount will be added on price=" << endl;
        cout << "Price of item (from Item class which is private)=" << item.price << endl;
    }
};

int main()
{
    Item i = Item(100);

    Discount d;
    d.print(i);
    return 0;
}