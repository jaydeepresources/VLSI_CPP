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

    void checkDiscount() const // read-only
    {
        cout << "I am checking discount, not actually applying it." << endl;
        // price = price - 10;
    }
};

int main()
{
    Item i = Item(100);
    i.checkDiscount();
    return 0;
}