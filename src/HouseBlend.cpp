#include "HouseBlend.hpp"

HouseBlend::HouseBlend() : Beverage("House Blend Coffee")
{
    // nothing to do
}

double HouseBlend::cost() const
{
    return .89;
}