#include "Dog.h"

void Dog::sound() const
{
    cout << "Woof" << endl;
}

void Dog::type() const
{
    cout << "Dog" << endl;
}

void Dog::show() const
{
    Animal::show();
    cout << "Breed: " << breed << endl;
}
