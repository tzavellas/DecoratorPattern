#include "DarkRoast.hpp"

DarkRoast::DarkRoast() : Beverage("Dark Roast Coffee")
{
    // nothing to do
}

double DarkRoast::cost() const
{
    return .99;
}