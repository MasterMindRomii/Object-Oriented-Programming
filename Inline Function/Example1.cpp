#include <iostream>
using namespace std;

inline int cube(int a)
{
    return a * a * a;
}

int main()
{
    int c;
    c = cube(10);
    cout << c;

    return 0;
}