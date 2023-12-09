#include <iostream>
using namespace std;

// Address class representing an address
class Address {
private:
    string street;
    string city;
    string country;

public:
    Address(const string& st, const string& ct, const string& cntry)
        : street(st), city(ct), country(cntry) {}

    void displayAddress() const {
        cout << "Address: " << street << ", " << city << ", " << country << endl;
    }
};

// Person class demonstrating aggregation with Address
class Person {
private:
    string name;
    int age;
    Address personAddress; // Aggregation - Person has an Address

public:
    Person(const string& n, int a, const string& street, const string& city, const string& country)
        : name(n), age(a), personAddress(street, city, country) {}

    void displayInfo() const {
        cout << "Name: " << name << ", Age: " << age << endl;
        personAddress.displayAddress(); // Accessing Address object through aggregation
    }
};

int main() {
    // Creating a Person object with an Address
    Person person("Alice", 30, "123 Main St", "Anytown", "USA");
    person.displayInfo(); // Displaying person's information and address

    return 0;
}
