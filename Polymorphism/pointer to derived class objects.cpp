#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void Sound() const
    {
        cout << "Undefined Sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void Sound() const override
    {
        cout << "Whao Whao" << endl;
    }
};

class Cat : public Animal
{
public:
    void Sound() const override
    {
        cout << "Meao Meao" << endl;
    }
};

int main()
{
    Dog dog;
    Cat cat;

    Animal *Der1Animals;
    Animal *Der2Animals;

    Der1Animals = &dog;
    Der2Animals = &cat;

    Der1Animals->Sound();
    Der2Animals->Sound();

    return 0;
}