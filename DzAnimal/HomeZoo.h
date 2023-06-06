#pragma once
#include "List.h"

class HomeZoo {
private:
    vector<Animal*> zoo;

public:
    HomeZoo() {}

    ~HomeZoo() {
        for (Animal* animal : zoo) {
            delete animal;
        }
        zoo.clear();
    }

    void addAnimal() {
        string animalType, name;
        size_t age;
        string additionalInfo;

        cout << "Enter animal type (Dog, Cat, Parrot, Hamster): ";
        cin >> animalType;
        cout << "Enter animal name: ";
        cin >> name;
        cout << "Enter animal age: ";
        cin >> age;

        if (animalType == "Dog") {
            string breed;
            cout << "Enter dog breed: ";
            cin >> breed;
            zoo.push_back(new Dog(name, age, breed));
        }
        else if (animalType == "Cat") {
            string color;
            cout << "Enter cat color: ";
            cin >> color;
            zoo.push_back(new Cat(name, age, color));
        }
        else if (animalType == "Parrot") {
            string species;
            cout << "Enter parrot species: ";
            cin >> species;
            zoo.push_back(new Parrot(name, age, species));
        }
        else if (animalType == "Hamster") {
            string pattern;
            cout << "Enter hamster pattern: ";
            cin >> pattern;
            zoo.push_back(new Hamster(name, age, pattern));
        }
        else {
            cout << "Invalid animal type!" << endl;
        }
    }

    void displayAnimals() const {
        for (const Animal* animal : zoo) {
            animal->show();
        }
    }

    void removeAnimal(const string& animalName) {
        for (auto it = zoo.begin(); it != zoo.end(); ++it) {
            if ((*it)->getName() == animalName) {
                delete* it;
                zoo.erase(it);
                break;
            }
        }
    }

    void removeAnimals() {
        for (Animal* animal : zoo) {
            delete animal;
        }
        zoo.clear();
    }
};
