#include <iostream>
#include <cstdlib>
#include <map>

using namespace std;

int main()
{

    map<int, string> names;

    names[100] = "John";
    names[300] = "Zak";
    names[200] = "Zak";
    names[700] = "Mihir";
    names[400] = "Arya";

    map<int, string>::iterator iter = names.begin();

    while (iter != names.end())
    {
        cout << "Key=" << iter->first << "\t";
        cout << "Value=" << iter->second << endl;
        iter++;
    }

    return 0;
}