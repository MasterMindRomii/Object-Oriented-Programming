#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    Complex operator+(Complex const &Obj)
    {
        Complex res;
        res.imag = imag + Obj.imag;
        res.real = real + Obj.real;
        return res;
    }

    void display()
    {
        cout << "The complex number is :" << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex C1(2, 4), C2(3, 8);
    Complex C3 = C1 + C2;
    C3.display();
}