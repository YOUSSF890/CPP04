#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class  Animal
{
    protected:
        std::string type;
    public:
        Animal();

        virtual void makeSound()
        {
            std::cout << "Some generic animal sound\n";
        }

        Animal(const Animal &obj);
        Animal& operator=(const Animal &obj);
        std::string getType() const;
        ~Animal();
};

#endif