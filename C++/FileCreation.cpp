#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    // Create and open a text
    fstream myFile("ExampleFile.txt");

    // Open the file
    myFile.open("ExampleFile.txt", ios::app);

    // Check if file is open
    if (myFile.is_open())
    {
        cout << "file is open";
    }
    
    // Close the file
    myFile.close();
}