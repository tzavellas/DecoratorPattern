#ifndef CONDIMENTDECORATOR_HPP
#define CONDIMENTDECORATOR_HPP

#include "Beverage.hpp"
#include <memory>

class CondimentDecorator : public Beverage
{
public:
    ~CondimentDecorator() = default;
    Size getSize() const override;
protected:
    CondimentDecorator(std::unique_ptr< Beverage > beverage);
    std::unique_ptr< Beverage > m_Beverage;
};

#endif // CONDIMENTDECORATOR_HPP