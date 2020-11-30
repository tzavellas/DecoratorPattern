#ifndef CONDIMENTDECORATOR_HPP
#define CONDIMENTDECORATOR_HPP

#include "Beverage.hpp"
#include <memory>

class CondimentDecorator : public Beverage
{
public:
    ~CondimentDecorator() = default;
protected:
    CondimentDecorator(const std::shared_ptr< Beverage >& beverage);
    std::shared_ptr< Beverage > m_Beverage;
};

#endif // CONDIMENTDECORATOR_HPP