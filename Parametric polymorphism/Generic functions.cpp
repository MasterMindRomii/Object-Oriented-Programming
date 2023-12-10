#include <iostream>
using namespace std;

template <typename T>
T Maximum(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    int IntMax = Maximum(34, 65);
    double DoubMax = Maximum(34.5, 67.5);

    cout << "Maximum integer: " << IntMax << endl;
    cout << "Maximum double: " << DoubMax << endl;

    return 0;
}