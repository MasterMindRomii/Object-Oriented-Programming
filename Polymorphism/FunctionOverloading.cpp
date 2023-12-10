#include <iostream>
using namespace std;

class Overloading
{
public:
    void fun()
    {
        cout << "I am a Function with no argument" << endl;
    }

    void fun(int x)
    {
        cout << "I am a Function with int argument having value " << x << endl;
    }

    void fun(double x)
    {
        cout << "I am a Function with double argument having value " << x << endl;
    }
};

int main()
{
    Overloading Obj;

    Obj.fun();
    Obj.fun(3);
    Obj.fun(5.6);
}