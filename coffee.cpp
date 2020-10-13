#include "coffee.h"

Coffee::Coffee()
{

}

void Coffee:: prepareRecipe() {
    boilWater();
    brewCoffeeGrind();
    pourInCup();
    addSugarAndMilk();
}
void Coffee:: brewCoffeeGrind() {
    cout << "Dripping Coffee through filter" << endl;
}
void Coffee:: addSugarAndMilk() {
    cout << "Adding Sugar and Milk" << endl;
}
