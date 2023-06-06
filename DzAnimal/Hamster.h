#pragma once
#include "List.h"
using namespace std;

class Hamster : public Animal {
private:
    string pattern;

public:
    Hamster(const string& animalName, size_t animalAge, const string& hamsterPattern)
        : Animal(animalName, animalAge), pattern(hamsterPattern) {}

    void sound() const override;

    void type() const override;

    void show() const override;
};
