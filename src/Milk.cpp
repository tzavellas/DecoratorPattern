#include "Milk.hpp"

Milk::Milk(const std::shared_ptr<Beverage>& beverage) : CondimentDecorator(beverage)
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