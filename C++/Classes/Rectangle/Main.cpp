#include <iostream>
#include "Rectangle.h"
using namespace std;

float getSide(string sideName);

int main(){
    Rectangle rectangle1; // create a rectangle object

    // Getting length and width of rectangle1 from user
    float length = getSide("Length");
    float width = getSide("Width");

    rectangle1.setLength(length); // set length of the rectangle to 4
    rectangle1.setWidth(width); // Set width of the rectangle to 4
    cout << "Area of rectangle 1 is: " << rectangle1.getArea() << endl << endl; // Print area of the rectangle

    // Getting length and width of rectangle1 from user
    float length1 = getSide("Length");
    float width1 = getSide("Length");


    // Create a rectangle object of length 8 and width 5
    Rectangle rectangle2(length1, width1);  
    cout << "Area of rectangle 2 is: " << rectangle2.getArea() << endl; // Print area of the rectangle
}

float getSide(string sideName){
    // Getting length and width from user
    float side;

    // Check if the side is positive
    do{
        cout << sideName << " of rectangle 1: ";
        cin >> side;
    }while(side < 0);
    return side;
}