#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    void setData(int x, int y)
    {
        real = x;
        imag = y;
    }

    void showData()
    {
        cout << "Sum of Complex Numers:" << real << " " << imag << endl;
    }

    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main()
{
    Complex C1, C2, C3;
    C1.setData(1, 3);
    C2.setData(5, 4);
    C3 = C1 + C2;
    C3.showData();
}