#pragma once
#include "List.h"
using namespace std;

class Cat : public Animal {
private:
    string color;

public:
    Cat(const string& animalName, size_t animalAge, const string& catColor)
        : Animal(animalName, animalAge), color(catColor) {}

    void sound() const override {
        cout << "Meow" << endl;
    }

    void type() const override {
        cout << "Cat" << endl;
    }

    void show() const override {
        Animal::show();
        cout << "Color: " << color << endl;
    }
};
