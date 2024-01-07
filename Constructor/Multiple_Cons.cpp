#include <iostream>
using namespace std;

class Rectangle
{
    int m, n;

public:
    Rectangle() : m(0), n(0) {}

    Rectangle(int x, int y) : m(x), n(y) {}

    Rectangle(const Rectangle &other)
    {
        m = other.m;
        n = other.n;
    }

    void area()
    {
        cout << "The area of rectangle: " << m * n << endl;
    }

    ~Rectangle() {} 

};

int main()
{
    Rectangle R1;
    Rectangle R2(3, 5);
    Rectangle R3 = R2;

    R1.area();
    R2.area();
    R3.area();

    return 0;
}
