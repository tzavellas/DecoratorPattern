#include "CondimentDecorator.hpp"

CondimentDecorator::CondimentDecorator(const std::shared_ptr< Beverage >& beverage) : m_Beverage{beverage}
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