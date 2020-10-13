#ifndef COFFEE_H
#define COFFEE_H

#include "caffeinebeverage.h"

class Coffee : public CaffeineBeverage {
public:
    Coffee();
    virtual void prepareRecipe();
    void brewCoffeeGrind();
    void addSugarAndMilk();
};

#endif // COFFEE_H
