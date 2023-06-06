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

    virtual void show() const;

    const string& getName() const;

    void setName(const string& animalName);

    size_t getAge() const;

    void setAge(size_t animalAge);
};
