#include <iostream>
using namespace std;

// Function prototype
void add(int *a, int *b);

int main()
{
    int a = 5, b = 7;
    cout << "**********Before********" << endl;
    cout << "a: " << a << endl
         << "b: " << b << endl;
    // Adding 5 to a and 3 to b
    add(&a, &b);
    cout << "**********After********" << endl;
    cout << "a: " << a << endl
         << "b: " << b << endl;
}

// Changes the values of a and b
void add(int *a, int *b)
{
    *a = 10;
    *b = 10;
}