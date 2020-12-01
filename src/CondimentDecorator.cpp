#include "CondimentDecorator.hpp"

CondimentDecorator::CondimentDecorator(std::unique_ptr< Beverage > beverage) : m_Beverage{std::move(beverage)}
{
    // nothing to do
}

Beverage::Size CondimentDecorator::getSize() const
{
    Size ret{Size::INVALID};
    if (m_Beverage)
    {
        ret = m_Beverage->getSize();
    }
    return ret;
}