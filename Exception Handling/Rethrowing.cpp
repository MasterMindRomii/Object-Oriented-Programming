#include <iostream>
using namespace std;

void test(int i)
{

    try
    {
        if (i < 0)
        {
            throw i;
        }
    }

    catch (int j)
    {
        cout << "Inside Test";
        throw;
    }
}

int main()
{
    try
    {
        test(-4);
    }

    catch (int k)
    {
        cout << "Inside Main";
    }

    return 0;
}