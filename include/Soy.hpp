#ifndef SOY_HPP
#define SOY_HPP

#include "CondimentDecorator.hpp"

class Soy : public CondimentDecorator
{
public:
    Soy(const std::shared_ptr< Beverage >& beverage);
    std::string getDescription() const override;
    double cost() const override;
};

#endif // SOY_HPP