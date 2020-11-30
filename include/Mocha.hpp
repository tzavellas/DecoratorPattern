#ifndef MOCHA_HPP
#define MOCHA_HPP

#include "CondimentDecorator.hpp"

class Mocha : public CondimentDecorator
{
public:
    Mocha(const std::shared_ptr< Beverage >& beverage);
    std::string getDescription() const override;
    double cost() const override;
};

#endif // MOCHA_HPP