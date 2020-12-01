#include "Mocha.hpp"

Mocha::Mocha(std::unique_ptr< Beverage > beverage) : CondimentDecorator(std::move(beverage))
{
    // nothing to do
}

std::string Mocha::getDescription() const
{
    std::string ret;
    if (m_Beverage)
    {
        ret = m_Beverage->getDescription();
    }
    return ret + ", Mocha";
}

double Mocha::cost() const
{
    double ret;
    if (m_Beverage)
    {
        ret = m_Beverage->cost();
    }
    return ret + .20;
}