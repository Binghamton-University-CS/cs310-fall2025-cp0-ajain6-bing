#ifndef AnimalsInZoo_H
#define AnimalsInZoo_H
#include "Animal.h"

using namespace std;


class AnimalsInZoo {
public:
        AnimalsInZoo(Animal animal);
        AnimalsInZoo();
        void display();

private:
      int numAnimals;
      Animal animal;
};

#endif
