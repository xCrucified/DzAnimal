#pragma once
#include "List.h"
using namespace std;

class Dog : public Animal {
private:
    string breed;

public:
    Dog(const string& animalName, size_t animalAge, const string& dogBreed)
        : Animal(animalName, animalAge), breed(dogBreed) {}

    void sound() const override;

    void type() const override;

    void show() const override;
};
