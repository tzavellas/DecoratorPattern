#ifndef DARKROAST_HPP
#define DARKROAST_HPP

#include "Beverage.hpp"

class DarkRoast : public Beverage
{
public:
    DarkRoast();
    double cost() const override;
};

#endif // DARKROAST_HPP