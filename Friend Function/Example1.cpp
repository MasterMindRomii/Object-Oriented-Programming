#include <iostream>
using namespace std;

class Complex
{

private:
    int real;
    int imag;

public:
    void Setdata(int a, int b)
    {
        real=a;
        imag=b;
    }

    void Showdata()
    {
        cout << "Value of a: " << real << " and b is: " << imag << endl;
    }

    friend void fun(Complex);
};

void fun(Complex C)
{
    cout << "The Complex Number is : " << C.real + C.imag << endl;
}

int main()
{
    Complex C1;
    C1.Setdata(12, 34);
    C1.Showdata();
    fun(C1);
}