#include "CondimentDecorator.hpp"

CondimentDecorator::CondimentDecorator(const std::shared_ptr< Beverage >& beverage) : m_Beverage{beverage}
{
    // nothing to do
}