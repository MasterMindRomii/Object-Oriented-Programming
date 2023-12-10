#include <iostream>
using namespace std;

class Distance {
private:
    float meters;

public:
    Distance(float m) : meters(m) {}

    // Conversion operator to convert Distance to float
    operator float() const {
        return meters; // Converts Distance object to float by returning the meters value
    }
};

int main() {
    Distance dist(10.5); // Creating a Distance object with meters value 10.5

    float meters = static_cast<float>(dist); // Using the conversion operator to convert Distance to float

    cout << "Converted value in meters: " << meters << endl; // Output: Converted value in meters: 10.5

    return 0;
}
