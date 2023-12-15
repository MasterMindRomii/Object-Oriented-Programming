#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    void setData(int a, int b)
    {
        real = a;
        imag = b;
    }

    void showData()
    {
        cout << "\n real= " << real << " imag= " << imag << endl;
    }

    friend Complex operator+(Complex, Complex);
};

Complex operator+(Complex X, Complex Y)
{
    Complex temp;
    temp.real = X.real + Y.real;
    temp.imag = X.imag + Y.imag;
    return (temp);
}

int main()
{
    Complex C1, C2, C3;
    C1.setData(12, 34);
    C2.setData(45, 56);
    C3 = C1 + C2;
    C3.showData();

    return 0;
}
