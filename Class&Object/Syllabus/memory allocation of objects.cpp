#include <iostream>
using namespace std;

class Rectangle
{
    
public:
    int lenght;
    int width;
    Rectangle(int l, int w)
    {
        lenght = l;
        width = w;
    }

};

int main()
{
    Rectangle R1(12, 34);

    Rectangle *R2 = new Rectangle(12, 25);

    cout << R1.lenght*R1.width;
    cout << R2->lenght*R2->width;
}