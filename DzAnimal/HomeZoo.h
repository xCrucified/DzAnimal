#pragma once
#include "List.h"

class HomeZoo {
private:
    vector<Animal*> zoo;

public:
    HomeZoo() {}

    ~HomeZoo();

    void addAnimal();

    void displayAnimals() const;

    void removeAnimal(const string& animalName);

    void removeAnimals();
};
