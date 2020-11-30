#include "Decaf.hpp"

Decaf::Decaf() : Beverage("Decaf")
{
    // nothing to do
}

double Decaf::cost() const
{
    return 1.05;
}