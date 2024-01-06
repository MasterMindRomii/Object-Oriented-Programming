#include<iostream>
using namespace std;

class Add 
{

public:
    void add(int num1, int num2)
    {
        cout << num1+num2 <<endl;
    }

    void add(float num1, float num2)
    {
        cout << num1+num2 <<endl;
    }

    void add(int num1, int num2, int num3)
    {
        cout << num1+num2+num3;
    }
};

int main()
{
    Add m;
    m.add(12,12);
    m.add(12.5f,56.7f);
    m.add(12,23,45);

    return 0;

}