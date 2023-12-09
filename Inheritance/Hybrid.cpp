#include <iostream>
using namespace std;

class hybrid
{
public:
    void Hybrid()
    {
        cout << "Multiple Inheritance" << endl;
    }
};

class derived : public multiple
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
    derived s;
    SubDerived s1;
    s.Hybrid();
    s1.Derived();
    s1.Hybrid();
}