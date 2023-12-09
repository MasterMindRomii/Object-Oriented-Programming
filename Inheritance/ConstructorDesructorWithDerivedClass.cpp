#include <iostream>
using namespace std;

// Base class
class Base {
public:
    Base() {
        cout << "Base class constructor" << endl;
    }
    
    Base(int value) {
        cout << "Base class parameterized constructor with value: " << value << endl;
    }
};

// Derived class
class Derived : public Base {
public:
    // Derived class constructor calling base class constructor
    Derived() : Base() {
        cout << "Derived class constructor" << endl;
    }
    
    // Derived class parameterized constructor calling specific base class constructor
    Derived(int value) : Base(value) {
        cout << "Derived class parameterized constructor with value: " << value << endl;
    }
};

int main() {
    Derived d; // Calls the default constructor of Base and Derived

    cout << endl;

    Derived d2(10); // Calls the parameterized constructors of Base and Derived

    return 0;
}
