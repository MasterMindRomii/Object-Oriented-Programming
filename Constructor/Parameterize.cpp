#include<iostream>
using namespace std;

class Rectangle
{
    int m,n;
    public:
        Rectangle(int x, int y)
        {
            m=x;
            n=y;
        }

        void area()
        {
            cout << "The area of rectangle:" << m*n << endl;
        }
};

int main()
{
    Rectangle R(12,34);
    // Rectangle;
    R.area();
}