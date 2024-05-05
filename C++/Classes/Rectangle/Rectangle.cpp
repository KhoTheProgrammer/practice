#include "Rectangle.h"

// Default Constructor initializing member variables to zero
Rectangle::Rectangle()
{
    length = 0;
    width = 0;
}

// Deconstructor doing nothing
Rectangle::~Rectangle()
{
}

// Sets length for the object
void Rectangle::setLength(float length)
{
    this->length = length;
}

// Sets width for the object
void Rectangle::setWidth(float width)
{
    this->width = width;
}

// Returns length of the object
float Rectangle::getLength()
{
    return this->width;
}

// Returns width of the object
float Rectangle::getWidth()
{
    return this->width;
}

// Returns area of the object
float Rectangle::getArea()
{
    return this->length * this->width;
}
    