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
};

int main() {
    int intValue = 10; // Basic type (int)
    MyNumber numObj = intValue; // Basic type (int) to class type conversion

    numObj.display();

    return 0;
}
