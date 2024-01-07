#include <iostream>
using namespace std;

class Rectangle
{
    int lenght;
    int width;

public:
    Rectangle(int l, int w)
    {
        lenght = l;
        width = w;
    }

    int Area()
    {
        return lenght * width;
    }

    void display_Dimension()
    {
        cout << "Lenght:" << lenght << " Width:" << width << endl;
    }

    void display_Area(Rectangle rect)
    {
        rect.display_Dimension();
        cout << "The Area Rectangle: " << rect.Area() << endl;
    }
};

int main()
{
    Rectangle Rect1(12, 14);
    Rectangle Rect2(12, 15);
    Rect1.display_Area(Rect1);
    Rect2.display_Area(Rect2);

    return 0;
}