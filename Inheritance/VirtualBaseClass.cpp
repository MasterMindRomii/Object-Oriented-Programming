#include <iostream>
using namespace std;

class Base {
public:
    int baseValue;

    Base() : baseValue(10) {}
};

class Derived1 : virtual public Base {};

class Derived2 : virtual public Base {};

class MultipleDerived : public Derived1, public Derived2 {};

int main() {
    MultipleDerived obj;

    obj.baseValue = 20; // Accessing baseValue through MultipleDerived

    cout << "Value of baseValue in MultipleDerived: " << obj.baseValue << endl;

    return 0;
}
