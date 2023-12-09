#include <iostream>
using namespace std;

class multiple
{
public:
    void Multiple()
    {
        cout << "Multiple Inheritance" << endl;
    }
};

class derived
{
public:
    void Derived()
    {
        cout << "Derived From Multiple Function" << endl;
    }
};

class SubDerived : public multiple, public derived
{
};

int main()
{
    SubDerived s1;
    s1.Multiple();
    s1.Derived();
}