#include "Milk.hpp"

Milk::Milk(std::unique_ptr< Beverage > beverage) : CondimentDecorator(std::move(beverage))
{
    // nothing to do
}

std::string Milk::getDescription() const
{
    std::string ret;
    if (m_Beverage)
    {
        ret = m_Beverage->getDescription();
    }
    return ret + ", Steamed Milk";
}

double Milk::cost() const
{
    double ret;
    if (m_Beverage)
    {
        ret = m_Beverage->cost();
    }
    return ret + .10;
}