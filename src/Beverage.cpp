#include "Beverage.hpp"

Beverage::Beverage(const std::string& description) : m_Description{description}
{
    // nothing to do
}

std::string Beverage::getDescription() const
{
    return m_Description;
}

double Beverage::cost() const
{
    return .0;
}