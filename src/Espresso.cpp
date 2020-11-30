#include "Espresso.hpp"

Espresso::Espresso() : Beverage("Espresso")
{
    // nothing to do
}

double Espresso::cost() const
{
    return 1.99;
}