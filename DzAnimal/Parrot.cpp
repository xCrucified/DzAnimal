#include "Parrot.h"

void Parrot::sound() const
{
    cout << "Squawk" << endl;
}

void Parrot::type() const
{
    cout << "Parrot" << endl;
}

void Parrot::show() const
{
    Animal::show();
    cout << "Species: " << species << endl;
}
