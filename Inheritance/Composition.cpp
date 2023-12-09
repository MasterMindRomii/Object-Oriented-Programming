#include <iostream>
using namespace std;

// Engine class representing an engine
class Engine {
public:
    void start() {
        cout << "Engine started" << endl;
    }
};

// Car class demonstrating composition with Engine
class Car {
private:
    Engine carEngine; // Composition - Car has an Engine

public:
    void startCar() {
        carEngine.start(); // Accessing Engine object through composition
    }
};

int main() {
    Car myCar;
    myCar.startCar(); // This will start the car's engine

    return 0;
}
