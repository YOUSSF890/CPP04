#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat"; 
    std::cout << "Cat Default constructor called\n";
}

Cat::Cat(const Cat& other)
{
    this->type = other.type;
    std::cout << "Cat copy constructor called\n";
}

Cat& Cat::operator=(const Cat& other)
{
    this->type = other.type;
    std::cout << "Cat Copy assignment operator called\n";
    return (*this);
}

void Cat::makeSound()
{
    std::cout << "meow!!\n";
}


Cat::~Cat()
{
    std::cout << "Cat Destructor called\n";
}