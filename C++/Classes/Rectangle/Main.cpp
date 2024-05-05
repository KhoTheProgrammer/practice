#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(){
    Rectangle rect; // create a rectangle object
    // Getting length and width from user
    float length, width;

    // Check if both length and width are positive
    do{
        cout << "Length: ";
        cin >> length;
        cout << "Width: ";
        cin >> width;
    }while(length < 0 || width < 0);

    rect.setLength(length); // set length of the rectangle to 4
    rect.setWidth(width); // Set width of the rectangle to 4
    cout << "Area is: " << rect.getArea() << endl; // Print area of the rectangle
}