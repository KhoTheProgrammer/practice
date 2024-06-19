#include <iostream>
using namespace std;

void add(int *a, int *b);

int main()
{
    int a = 5, b = 7;
    cout << "**********Before********" << endl;
    cout << "a: " << a << endl
         << "b: " << b << endl;
    add(&a, &b);
    cout << "**********After********" << endl;
    cout << "a: " << a << endl
         << "b: " << b << endl;
}

void add(int *a, int *b)
{
    *a = 10;
    *b = 10;
}