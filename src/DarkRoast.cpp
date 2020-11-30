#include "DarkRoast.hpp"

DarkRoast::DarkRoast(const Size& size) : Beverage("Dark Roast Coffee", size)
{
    // nothing to do
}

double DarkRoast::cost() const
{
    return .99;
}