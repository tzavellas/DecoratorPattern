#ifndef DARKROAST_HPP
#define DARKROAST_HPP

#include "Beverage.hpp"

class DarkRoast : public Beverage
{
public:
    DarkRoast(const Size& size = Size::TALL);
    double cost() const override;
};

#endif // DARKROAST_HPP