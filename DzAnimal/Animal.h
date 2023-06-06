#pragma once
#include "List.h"
using namespace std;

class Animal {
protected:
    string name;
    size_t age;

public:
    Animal(const string& animalName, size_t animalAge)
        : name(animalName), age(animalAge) {}

    virtual void sound() const = 0;

    virtual void type() const = 0;

    virtual void show() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        sound();
        type();
        cout << endl;
    }

    const string& getName() const {
        return name;
    }

    void setName(const string& animalName) {
        name = animalName;
    }

    size_t getAge() const {
        return age;
    }

    void setAge(size_t animalAge) {
        age = animalAge;
    }
};
