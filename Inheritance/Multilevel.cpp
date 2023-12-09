#include <iostream>
using namespace std;

class multilevel
{
public:
    void Multilevel()
    {
        cout << "MultiLevel Inheritance" << endl;
    }
};

class derived : public multilevel
{
public:
    void Derived()
    {
        cout << " MultiLevel Inheritance" << endl;
    }
};

class SubDerived : public derived
{
};

int main()
{
    derived s;
    SubDerived s1;
    s.Multilevel();
    s1.Derived();
}