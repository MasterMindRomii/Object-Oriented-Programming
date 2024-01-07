#include <iostream>
using namespace std;

class Feet {
private:
    int feet;

public:
    Feet() : feet(0) {}
    Feet(int f) : feet(f) {}

    int getFeet() const {
        return feet;
    }
};

class Meters {
private:
    int meters;

public:
    Meters() : meters(0) {}
    Meters(const Feet &f) {
        meters = f.getFeet() / 3.281; // Conversion logic from feet to meters
    }

    void display() {
        cout << "Value in Meters: " << meters << endl;
    }
};

int main() {
    Feet feetObj(10); // Class type (Feet)
    Meters metersObj = feetObj; // Class type (Feet) to class type (Meters) conversion

    metersObj.display();

    return 0;
}
