#include <iostream>

// Abstract base class
class AbstractShape {
public:
    // Pure virtual function - no implementation provided
    virtual void draw() const = 0;

    // Regular member function with implementation
    void commonOperation() {
        std::cout << "Performing common operation for shapes." << std::endl;
    }
};

// Derived class implementing the pure virtual function
class Circle : public AbstractShape {
public:
    // Implementing the pure virtual function
    void draw() const override {
        std::cout << "Drawing Circle." << std::endl;
    }
};

// Another derived class implementing the pure virtual function
class Square : public AbstractShape {
public:
    // Implementing the pure virtual function
    void draw() const override {
        std::cout << "Drawing Square." << std::endl;
    }
};

int main() {
    Circle circle;
    Square square;

    circle.draw(); // Calls Circle's draw function
    square.draw(); // Calls Square's draw function

    circle.commonOperation(); // Calls commonOperation() from AbstractShape
    square.commonOperation(); // Calls commonOperation() from AbstractShape

    return 0;
}
