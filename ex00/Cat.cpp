#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat Default constructor called\n";
}

Cat::Cat(const Cat &obj)
{
    std::cout << "Cat copy constructor called\n";
    this->type = obj.type;
}

Cat& Cat::operator=(const Cat &obj)
{
    this->type = obj.type;
    std::cout << "Cat Copy assignment operator called\n";
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called\n";
}