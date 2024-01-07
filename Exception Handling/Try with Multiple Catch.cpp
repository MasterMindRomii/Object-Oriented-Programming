#include <iostream>
using namespace std;

void test(int x)
{
    try
    {
        if (x == 1)
        {
            throw(x);
        }

        else if (x == 0)
        {
            throw('x');
        }

        else if (x == -1)
        {
            throw(1.0);
        }
    }
    catch (int x)
    {
        cout << "Caught an integer" << endl;
    }

    catch (char x)
    {
        cout << "Caught a character" << endl;
    }

    catch (double x)
    {
        cout << "Caught a Double" << endl;
    }
}
int main()
{
    cout << "Test multiple catches:" << endl;
    test(1);
    test(0);
    test(-1);
    test(2);
    cout << "End of the try catch system" << endl;

    return 0;
}