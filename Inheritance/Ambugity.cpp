#include <iostream>
using namespace std;

class BaseClass1
{
public:
    virtual void display()
    {
        cout << "BaseClass1 Display" << endl;
    }
};

class BaseClass2
{
public:
    virtual void display()
    {
        cout << "BaseClass2 Display" << endl;
    }
};

class Derived : public BaseClass1, public BaseClass2
{
public:
    // Overrides the display() function from both base classes
    void display()
    {
        cout << "Derived Display" << endl;
    }
};

int main()
{
    Derived obj;
    obj.display(); // Which display() function will be called?
    obj.Derived::display();
    obj.BaseClass1::display();
    obj.BaseClass2::display();
    return 0;
}
