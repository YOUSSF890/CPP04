#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called\n";
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain copy constructor\n";
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout << "Brain copy assignment operator called\n";
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called\n";
}