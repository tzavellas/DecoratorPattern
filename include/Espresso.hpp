#ifndef ESPRESSO_HPP
#define ESPRESSO_HPP

#include "Beverage.hpp"

class Espresso : public Beverage
{
public:
    Espresso(const Size& size = Size::TALL);
    double cost() const override;
};

#endif // ESPRESSO_HPP