#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void Sound()
    {
        cout << "Undefined" << endl;
    }
};

class Dog : public Animal
{
public:
    void Sound() override
    {
        cout << "Bark" << endl;
    }
};

class Cat : public Animal
{
public:
    void Sound() override
    {
        cout << "Meow" << endl;
    }
};

int main()
{
    Animal *animal;
    Dog dog;
    Cat cat;

    animal = &dog;
    animal->Sound();

    animal = &cat;
    animal->Sound();

    return 0;
}