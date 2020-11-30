#ifndef BEVERAGE_HPP
#define BEVERAGE_HPP

#include <string>

class Beverage
{
public:
    enum class Size { TALL, GRANDE, VENTI, INVALID };
    virtual ~Beverage() = default;
    virtual std::string getDescription() const;
    virtual double cost() const;
    virtual Size getSize() const;
    virtual void setSize(const Size& size);
protected:
    Beverage(const std::string& description = "Unknown Beverage", const Size& size = Size::TALL);
    std::string m_Description;
    Size m_Size;
};

#endif // BEVERAGE_HPP