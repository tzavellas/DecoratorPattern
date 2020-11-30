#include "Whip.hpp"

Whip::Whip(const std::shared_ptr< Beverage >& beverage) : CondimentDecorator(beverage)
{
    // nothing to do
}

std::string Whip::getDescription() const
{
    std::string ret;
    if (m_Beverage)
    {
        ret = m_Beverage->getDescription();
    }
    return ret + ", Whip";
}

double Whip::cost() const
{
    double ret;
    if (m_Beverage)
    {
        ret = m_Beverage->cost();
    }
    return ret + .10;
}