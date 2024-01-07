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

    void area()
    {
        cout << "The area of rectangle:" << m * n << endl;
    }
};

int
main()
{
    Rectangle R;
    R.area();
}