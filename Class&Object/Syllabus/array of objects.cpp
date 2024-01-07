#include <iostream>
using namespace std;

class Rectangle
{

    int m, n;

public:
    Rectangle()
    {
        m = 0;
        n = 0;
    }

    void SetDimension(int x, int y)
    {
        m = x;
        n = y;
    }

    void display()
    {
        cout << "The lenght and Breath of Rectangle is: " << m << " and " << n << endl;
    }

    int Area()
    {
        return m * n;
    }
};

int main()
{
    const int Lenght = 3;
    Rectangle rectangle[Lenght];

    rectangle[0].SetDimension(12, 13);
    rectangle[1].SetDimension(12, 18);
    rectangle[2].SetDimension(10, 12);

    for (int i = 0; i < Lenght; ++i)
    {
        cout << "Rectangle " << i + 1 << " Dimension" << endl;
        rectangle[i].display();
        cout << "Area of Dimensions:" << rectangle[i].Area() << endl;
    }
}