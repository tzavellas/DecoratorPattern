#ifndef WHIP_HPP
#define WHIP_HPP

#include "CondimentDecorator.hpp"

class Whip : public CondimentDecorator
{
public:
    Whip(const std::shared_ptr< Beverage >& beverage);
    std::string getDescription() const override;
    double cost() const override;
};

#endif // WHIP_HPP