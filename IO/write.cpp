#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file;
    file.open("/Users/administrator/Desktop/VLSI/output.txt");
    cout << "Writing File." << endl;
    string line = "This is a message which I want to write in a file.";

    file << line << endl;
    cout << "Writing File Complete." << endl;

    file.close();

    return 0;
}