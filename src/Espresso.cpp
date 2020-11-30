#include "Espresso.hpp"

Espresso::Espresso(const Size& size) : Beverage("Espresso", size)
{
    // nothing to do
}

double Espresso::cost() const
{
    return 1.99;
}