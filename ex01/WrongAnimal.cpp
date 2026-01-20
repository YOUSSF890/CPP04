#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "X";
    std::cout << "WrongAnimal Default constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    type = other.type;
    std::cout << "WrongAnimal copy constructor called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    type = other.type;
    std::cout << "WrongAnimal copy assignment called\n";
    return (*this);
}

void WrongAnimal::makeSound()
{
    std::cout << "sound\n";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called\n";
}