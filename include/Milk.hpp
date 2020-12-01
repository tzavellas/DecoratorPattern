#ifndef MILK_HPP
#define MILK_HPP

#include "CondimentDecorator.hpp"

class Milk : public CondimentDecorator
{
public:
    Milk(std::unique_ptr< Beverage > beverage);
    std::string getDescription() const override;
    double cost() const override;
};

#endif // MILK_HPP