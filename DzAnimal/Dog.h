#pragma once
#include "List.h"
using namespace std;

class Dog : public Animal {
private:
    string breed;

public:
    Dog(const string& animalName, size_t animalAge, const string& dogBreed)
        : Animal(animalName, animalAge), breed(dogBreed) {}

    void sound() const override {
        cout << "Woof" << endl;
    }

    void type() const override {
        cout << "Dog" << endl;
    }

    void show() const override {
        Animal::show();
        cout << "Breed: " << breed << endl;
    }
};
