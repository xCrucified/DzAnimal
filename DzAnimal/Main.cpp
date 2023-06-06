#include "List.h"

int main() {
    HomeZoo zoo;

    zoo.addAnimal();
    zoo.addAnimal();
    zoo.addAnimal();

    cout << "All animals in the zoo:" << endl;
    zoo.displayAnimals();

    cout << "Enter the name of the animal to remove: ";
    string animalName;
    cin >> animalName;
    zoo.removeAnimal(animalName);

    cout << "All animals in the zoo after removing an animal:" << endl;
    zoo.displayAnimals();

    cout << "Removing all animals from the zoo..." << endl;
    zoo.removeAnimals();

    cout << "All animals in the zoo after removing all animals:" << endl;
    zoo.displayAnimals();

    return 0;
}