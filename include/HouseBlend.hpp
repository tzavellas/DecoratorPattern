#ifndef HOUSEBLEND_HPP
#define HOUSEBLEND_HPP

#include "Beverage.hpp"

class HouseBlend : public Beverage
{
public:
    HouseBlend(const Size& size = Size::TALL);
    double cost() const override;
};

#endif // HOUSEBLEND_HPP