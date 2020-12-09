#ifndef TEA_H
#define TEA_H

#include "caffeinebeverage.h"
#include <QString>


class Tea : public CaffeineBeverage {
public:
    Tea();
    void brew();
    void addCondiments();

};

#endif // TEA_H
