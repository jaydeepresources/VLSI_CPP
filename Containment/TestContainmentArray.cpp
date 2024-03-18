#include "Item.h"
#include <string>

int main()
{
    Item items[3];

    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        cout << "=====Enter values for item: " << i + 1 << "=====" << endl;
        items[i].acceptItem();
    }

    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        cout << "=====Printing values for item: " << i + 1 << "=====" << endl;
        items[i].printItem();
    }

    return 0;
}