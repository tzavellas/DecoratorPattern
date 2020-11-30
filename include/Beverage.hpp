#ifndef BEVERAGE_HPP
#define BEVERAGE_HPP

#include <string>

class Beverage
{
public:
    virtual ~Beverage() = default;
    virtual std::string getDescription() const;
    virtual double cost() const;
protected:
    Beverage(const std::string& description = "Unknown Beverage");
    std::string m_Description;
};

#endif // BEVERAGE_HPP