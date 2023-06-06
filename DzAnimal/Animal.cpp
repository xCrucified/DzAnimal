#include "Animal.h"

void Animal::show() const
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    sound();
    type();
    cout << endl;
}

const string& Animal::getName() const
{
    return name;
}

void Animal::setName(const string& animalName)
{
    return name;
}

size_t Animal::getAge() const
{
    return age;
}

void Animal::setAge(size_t animalAge)
{
    age = animalAge;
}
