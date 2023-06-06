#pragma once
#include "List.h"
using namespace std;

class Cat : public Animal {
private:
    string color;

public:
    Cat(const string& animalName, size_t animalAge, const string& catColor)
        : Animal(animalName, animalAge), color(catColor) {}

    void sound() const override;

    void type() const override;

    void show() const override;
};
