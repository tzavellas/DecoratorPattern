#include "Soy.hpp"

Soy::Soy(std::unique_ptr< Beverage > beverage) : CondimentDecorator(std::move(beverage))
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
        switch(m_Beverage->getSize())
        {
            case Size::TALL:
                ret += .10;
                break;
            case Size::GRANDE:
                ret += .15;
                break;
            case Size::VENTI:
                ret += .20;
                break;
            default:
                ret += .0;
                break;
        }
    }
    return ret;
}