#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongCat Default constructor called\n";
}

WrongCat::WrongCat(const WrongCat &obj)
{
    std::cout << "WrongCat copy constructor called\n";
    this->type = obj.type;
}

WrongCat& WrongCat::operator=(const WrongCat &obj)
{
    this->type = obj.type;
    std::cout << "WrongCat Copy assignment operator called\n";
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called\n";
}