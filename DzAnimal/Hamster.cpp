#include "Hamster.h"

void Hamster::sound() const
{
    cout << "Squeak" << endl;
}

void Hamster::type() const
{
    cout << "Hamster" << endl;
}

void Hamster::show() const
{
    Animal::show();
    cout << "Pattern: " << pattern << endl;
}
