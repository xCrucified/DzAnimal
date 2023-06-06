#pragma once
#include "List.h"
using namespace std;

class Parrot : public Animal {
private:
    string species;

public:
    Parrot(const string& animalName, size_t animalAge, const string& parrotSpecies)
        : Animal(animalName, animalAge), species(parrotSpecies) {}

    void sound() const override {
        cout << "Squawk" << endl;
    }

    void type() const override {
        cout << "Parrot" << endl;
    }

    void show() const override {
        Animal::show();
        cout << "Species: " << species << endl;
    }
};
