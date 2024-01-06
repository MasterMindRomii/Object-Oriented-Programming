#include <iostream>
using namespace std;

class Math
{
public:
    void add(int num1, int num2)
    {
        cout << num1 + num2 << endl;
    }

    void add(int num1, int num2, int num3)
    {
        cout << num1 + num2 + num3 << endl;
    }

    void add(float num1, float num2)
    {
        cout << num1 + num2;
    }

    int operator+(int num) const
    {
        return num;
    }

    float operator+(float num) const
    {
       return num;
    }
};

int main()
{
    Math m;
    m.add(12, 13);

    cout <<12+34;
    cout << 12.5+56.7;

    return 0;
}