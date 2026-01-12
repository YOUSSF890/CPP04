#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default constructor called\n";
}

Animal::Animal(Animal &obj)
{
    std::cout << "Animal copy constructor called\n";
    this->type = obj.type;
}

Animal& Animal::operator=(Animal &obj)
{
    this->type = obj.type;
    std::cout << "Animal Copy assignment operator called\n";
    return (*this);
}

std::string Animal::getType() const
{
    return (type);
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called\n";
}