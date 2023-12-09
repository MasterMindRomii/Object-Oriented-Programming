#include <iostream>
using namespace std;

class single
{
public:
    void Single()
    {
        cout << "Single Inheritance" << endl;
    }
};

class derived : public single
{
};

int main()
{
    derived s;
    s.Single();
}