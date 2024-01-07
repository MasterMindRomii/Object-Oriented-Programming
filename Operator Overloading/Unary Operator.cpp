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
        cout << "real= " << real << "Imag= " << imag << endl;
    }

    Complex operator-()
    {
        Complex temp;
        temp.real = -real;
        temp.imag = -imag;
        return temp;
    }
};

int main()
{
    Complex C1, C2;
    C1.setData(12, 23);
    C2 = -C1;
    C2.showData();

    return 0;
}