#include <iostream>
using namespace std;

template <typename T>
void display(T Value)
{
    cout << "The value of T is " << Value << endl;
}

int main()
{
    display(5);
    display(4.5);
    display("Hello");

    return 0;
}