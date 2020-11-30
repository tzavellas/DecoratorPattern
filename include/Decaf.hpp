#ifndef DECAF_HPP
#define DECAF_HPP

#include "Beverage.hpp"

class Decaf : public Beverage
{
public:
    Decaf(const Size& size = Size::TALL);
    double cost() const override;
};

#endif // DECAF_HPP