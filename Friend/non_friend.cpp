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

    float getPrice()
    {
        return price;
    }

    void setPrice(float price)
    {
        this->price = price;
    }
};

class Discount
{
public:
    void print(Item &item)
    {
        cout << "Discount of Rs.20 will be added on item price." << endl;
        cout << "Price of item=" << item.getPrice() << endl;
        item.setPrice(item.getPrice() - 20);
        cout << "Price of item after discount=" << item.getPrice() << endl;
    }
};

int main()
{
    Item i = Item(100);

    Discount d;
    d.print(i);
    return 0;
}