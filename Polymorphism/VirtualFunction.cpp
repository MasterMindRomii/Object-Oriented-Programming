#include <iostream>
using namespace std;

class Base
{
public:
    virtual void print()
    {
        cout << "This is the print function within a base class" << endl;
    }

    void display()
    {
        cout << "This is the dsiplay function within a base class" << endl;
    }
};

class derived : public Base
{
public:
    void print()
    {
        cout << "This is the print function within a base class" << endl;
    }

    void display()
    {
        cout << "This is the dsiplay function within a base class" << endl;
    }
};

int main()
{
    Base *Baseptr;
    derived d;
    Baseptr = &d;

    Baseptr->display();
    Baseptr->print();
}
