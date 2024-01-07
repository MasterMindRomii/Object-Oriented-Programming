#include <iostream>
using namespace std;

class MyNumber {
private:
    int value;

public:
    MyNumber() : value(0) {}
    MyNumber(int v) : value(v) {}

    void display() {
        cout << "Value: " << value << endl;
    }

    operator int()
    {
        return value;
    }
};

int main() {
    MyNumber numObj(25); // Class type (MyNumber)
    int intValue = numObj; // Class type (MyNumber) to basic type (int) conversion

    cout << "Value as int: " << intValue << endl;

    return 0;
}
