#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog Default constructor called\n";
}

Dog::Dog(const Dog& other)
{
    type = other.type;
    std::cout << "Dog copy constructor called\n";
}

Dog& Dog::operator=(const Dog& other)
{
    type = other.type;
    std::cout << "Dog copy assignment operator called\n";
    return (*this);
}

void Dog::makeSound()
{
    std::cout << "woof!!\n";
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called\n";
}