#ifndef DECAF_HPP
#define DECAF_HPP

#include "Beverage.hpp"

class Decaf : public Beverage
{
public:
    Decaf();
    double cost() const override;
};

#endif // DECAF_HPP