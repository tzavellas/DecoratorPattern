#include "Soy.hpp"

Soy::Soy(const std::shared_ptr<Beverage>& beverage) : CondimentDecorator(beverage)
{
    // nothing to do
}

std::string Soy::getDescription() const
{
    std::string ret;
    if (m_Beverage)
    {
        ret = m_Beverage->getDescription();
    }
    return ret + ", Soy";
}

double Soy::cost() const
{
    double ret;
    if (m_Beverage)
    {
        ret = m_Beverage->cost();
    }
    return ret + .15;
}