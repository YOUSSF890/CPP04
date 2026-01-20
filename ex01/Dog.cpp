#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    brain = new Brain;
    std::cout << "Dog Default constructor called\n";
}

Dog::Dog(const Dog& other)
{
    type = other.type;
    brain = new Brain(*other.brain);
    std::cout << "Dog copy constructor called\n";
}

Dog& Dog::operator=(const Dog& other)
{
    type = other.type;
    if (this != &other)
    {
        delete brain;
        brain = new Brain(*other.brain);
    }
    std::cout << "Dog copy assignment operator called\n";
    return (*this);
}

void Dog::makeSound()
{
    std::cout << "woof!!\n";
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog Destructor called\n";
}