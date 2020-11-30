#include "Decaf.hpp"

Decaf::Decaf(const Size& size) : Beverage("Decaf", size)
{
    // nothing to do
}

double Decaf::cost() const
{
    return 1.05;
}