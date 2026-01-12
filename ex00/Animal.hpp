#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class  Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(Animal &obj);
        Animal& operator=(Animal &obj);
        std::string getType() const;
        // makeSound();
        ~Animal();
};

#endif