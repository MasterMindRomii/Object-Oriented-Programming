#include <iostream>
using namespace std;

class Rectangle {
private:
    int dimensions[2]; // Array to store length and width

public:
    void setDimensions(int length, int width) {
        // Function to set dimensions of the rectangle
        dimensions[0] = length; // Setting length
        dimensions[1] = width;  // Setting width
    }

    void displayDimensions() {
        // Displaying the dimensions of the rectangle
        cout << "Length: " << dimensions[0] << ", Width: " << dimensions[1] << endl;
    }
};

int main() {
    Rectangle rect1;
    rect1.setDimensions(3, 5);
    rect1.displayDimensions();

    Rectangle rect2;
    rect2.setDimensions(7, 10);
    rect2.displayDimensions();

    return 0;
}
