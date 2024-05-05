class Rectangle
{
    // Public Members
    public:
        Rectangle();
        Rectangle(float length, float width);
        ~Rectangle();
        void setLength(float length);
        void setWidth(float width);
        float getLength();
        float getWidth();
        float getArea();

    // Private members
    private:
        float length;
        float width;
};