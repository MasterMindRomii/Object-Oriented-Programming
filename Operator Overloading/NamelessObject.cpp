#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int val) : value(val) {}

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    // Creating and using nameless objects
    Number(5).display(); // Output: Value: 5

    return 0;
}
