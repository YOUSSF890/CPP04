#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog Default constructor called\n";
}

Dog::Dog(Dog &obj)
{
    std::cout << "Dog copy constructor called\n";
    this->type = obj.type;
}

Dog& Dog::operator=(Dog &obj)
{
    this->type = obj.type;
    std::cout << "Dog Copy assignment operator called\n";
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called\n";
}