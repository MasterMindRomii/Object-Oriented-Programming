#include <iostream>
using namespace std;

class Rectangle
{
    int m, n;

public:
    Rectangle(int x, int y)
    {
        m = x;
        n = y;
    }

    Rectangle(const Rectangle &x)
    {
        m = x.m;
        n = x.n;
    }

    void area()
    {
        cout << "The area of rectangle:" << m * n << endl;
    }

    ~Rectangle{};
};

int main()
{
    Rectangle R(3, 5);
    R.area();
}