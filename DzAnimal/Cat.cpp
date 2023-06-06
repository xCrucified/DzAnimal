#include "Cat.h"

void Cat::sound() const
{
    cout << "Meow" << endl;
}

void Cat::type() const
{
    cout << "Cat" << endl;
}

void Cat::show() const
{
    Animal::show();
    cout << "Color: " << color << endl;
}
