#include <iostream>
using namespace std;

class Person
{
private:
    int age;
    string name;

public:
    Person(int age, string name)
    {
        this->age = age;
        this->name = name;
    }

    void displayValue()
    {
        cout << "The age and name of person:" << age << name << endl;
    }
};

int main()
{
    Person P(20, "Romi");
    P.displayValue();

    return 0;
}