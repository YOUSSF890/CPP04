#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    brain = new Brain;
    std::cout << "Cat Default constructor called\n";
}

Cat::Cat(const Cat& other)
{
    type = other.type;
    brain = new Brain(*other.brain);
    std::cout << "Cat copy constructor called\n";
}

Cat& Cat::operator=(const Cat& other)
{
    Animal::operator=(other);
    if (this != &other)
    {
        delete brain;
        brain = new Brain(*other.brain);
    }
    std::cout << "Cat Copy assignment operator called\n";
    return (*this);
}

void Cat::makeSound()
{
    std::cout << "meow!!\n";
}


Cat::~Cat()
{
    delete brain;
    std::cout << "Cat Destructor called\n";
}