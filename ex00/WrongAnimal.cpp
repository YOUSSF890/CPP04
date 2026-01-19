#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    type = "WrongAnimal"; 
    std::cout << "WrongAnimal Default constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    std::cout << "WrongAnimal copy constructor called\n";
    this->type = obj.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &obj)
{
    if (this != &obj)
        this->type = obj.type;
    std::cout << "WrongAnimal Copy assignment operator called\n";
    return (*this);
}

std::string WrongAnimal::getType() const
{
    return (type);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called\n";
}