#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file;
    file.open("/Users/administrator/Desktop/VLSI/list.txt");
    cout << "Reading File." << endl;
    string line = "";
    while (!file.eof())
    {
        getline(file, line);
        line.append("\n");
        cout << line;
    }
    cout << "Whats in the line ?" << endl;
    cout << line;

    file.close();

    return 0;
}