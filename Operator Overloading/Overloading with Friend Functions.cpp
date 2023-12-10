#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    Number(int Val) : value(Val) {}

    friend Number operator*(const Number &Num1, const Number &Num2);

    void display()
    {
        cout << "The value is:" << value << endl;
    }
};

Number operator*(const Number &Num1, const Number &Num2)
{
    return Number(Num1.value * Num2.value);
}

int main()
{
    Number Num1(5); // Nameless object
    Number Num2(10);

    Number Num3 = Num1 * Num2;
    Num3.display();

    return 0;
}