#pragma once
#include "List.h"
using namespace std;

class Hamster : public Animal {
private:
    string pattern;

public:
    Hamster(const string& animalName, size_t animalAge, const string& hamsterPattern)
        : Animal(animalName, animalAge), pattern(hamsterPattern) {}

    void sound() const override {
        cout << "Squeak" << endl;
    }

    void type() const override {
        cout << "Hamster" << endl;
    }

    void show() const override {
        Animal::show();
        cout << "Pattern: " << pattern << endl;
    }
};
