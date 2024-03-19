#include <iostream>
using namespace std;

class Item
{
private:
    mutable float price;

public:
    Item()
    {
    }

    Item(float price)
    {
        this->price = price;
    }

    void checkDiscount() const
    {
        cout << "I am checking discount, not actually applying it." << endl;
        cout << "I am giving discount based on market conditions." << endl;
        price = price - 10;
        cout << "Price=" << price;
    }
};

int main()
{
    Item i = Item(100);
    i.checkDiscount();
    return 0;
}