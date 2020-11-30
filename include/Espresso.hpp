#ifndef ESPRESSO_HPP
#define ESPRESSO_HPP

#include "Beverage.hpp"

class Espresso : public Beverage
{
public:
    Espresso();
    double cost() const override;
};

#endif // ESPRESSO_HPP