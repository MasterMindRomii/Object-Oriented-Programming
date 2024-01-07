#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "The value of a and b are:" << a << " " << b << endl;

    try
    {
        if (b != 0)
        {
            cout << "Divison Result:" << a / b << endl;
        }
        else
        {
            throw(b);
        }
    }

    catch (int x)
    {
        cout << "Exception Catchted Divided by Zero:" << b;
    }

    return 0;
}