#include <iostream>
using namespace std;

class B;
class A
{
private:
    int a;
    int b;

public:
    void setData(int num1)
    {
        a = num1;
    }

    void showdata()
    {
        cout << "A and B is : " << a + b << endl;
    }

    friend void fun(A, B);
};
class B
{
private:
    int a;
    int b;

public:
    void setData(int num2)
    {
        b = num2;
    }

    void showdata()
    {
        cout << "A and B is : " << a + b << endl;
    }

    friend void fun(A, B);
};

void fun(A O1, B O2)
{
    cout << O1.a + O2.b << endl;
}

int main()
{
    A obj;
    B obj2;
    obj.setData(23);
    obj2.setData(17);
    fun(obj, obj2);
}
