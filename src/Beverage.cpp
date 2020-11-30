#include "Beverage.hpp"

Beverage::Beverage(const std::string& description, const Size& size) : m_Description{description}, m_Size{size}
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

Beverage::Size Beverage::getSize() const
{
    return m_Size;
}

void Beverage::setSize(const Size& size)
{
    m_Size = size;
}