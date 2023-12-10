#include <iostream>
using namespace std;

template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

template <typename T>
T maximum(T a, T b, T c) {
    return maximum(maximum(a, b), c);
}

int main() {
    int intMax = maximum(3, 7);
    double doubleMax = maximum(4.5, 2.1);
    int tripleMax = maximum(10, 30, 20);

    cout << "Maximum integer: " << intMax << endl;
    cout << "Maximum double: " << doubleMax << endl;
    cout << "Maximum of three integers: " << tripleMax << endl;
    return 0;
}
