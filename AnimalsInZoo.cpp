#include <iostream>
#include <stdlib.h>
#include "AnimalsInZoo.h"
#include "Animal.h"

using namespace std;

AnimalsInZoo::AnimalsInZoo(Animal animal_p) {
         numAnimals = 1;
	 animal = animal_p;
      }

AnimalsInZoo::AnimalsInZoo() : numAnimals(0) {};

void AnimalsInZoo::display() {
	if (numAnimals) {
        	cout << numAnimals << " Animal: " << endl;
		animal.display();
	} else {
		cout << "No Animals in zoo." << endl;
	}
}
