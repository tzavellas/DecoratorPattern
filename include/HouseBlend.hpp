#ifndef HOUSEBLEND_HPP
#define HOUSEBLEND_HPP

#include "Beverage.hpp"

class HouseBlend : public Beverage
{
public:
    HouseBlend();
    double cost() const override;
};

#endif // HOUSEBLEND_HPP