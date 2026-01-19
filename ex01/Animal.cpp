#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal"; 
    std::cout << "Animal Default constructor called\n";
}

Animal::Animal(const Animal &obj)
{
    std::cout << "Animal copy constructor called\n";
    this->type = obj.type;
}

// void makeSound()
// {
//     std::cout << "ggggg" << std::endl;
// }

Animal& Animal::operator=(const Animal &obj)
{
    if (this != &obj)
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