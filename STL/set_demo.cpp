#include <iostream>
#include <cstdlib>
#include <set>
using namespace std;

int main()
{

    set<int> nums;
    // for a descending set
    // set<int, greater<int>> nums;

    int MAX = 100;

    // inserting random values
    for (int i = 0; i < 10; i++)
        nums.insert(rand() % MAX);

    // printing values
    cout << "Printing Set using iterator" << endl;
    set<int>::iterator iter;
    for (iter = nums.begin(); iter != nums.end(); iter++)
    {
        cout << *iter << endl;
    }

    // delete a value
    cout << "Printing Set after deleting 58" << endl;
    nums.erase(58);

    for (iter = nums.begin(); iter != nums.end(); iter++)
    {
        cout << *iter << endl;
    }

    return 0;
}