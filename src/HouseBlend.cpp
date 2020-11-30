#include "HouseBlend.hpp"

HouseBlend::HouseBlend(const Size& size) : Beverage("House Blend Coffee", size)
{
    // nothing to do
}

double HouseBlend::cost() const
{
    return .89;
}