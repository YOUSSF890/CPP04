#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class  WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();

        void makeSound()
        {
            std::cout << "Animal sound\n";
        }

        WrongAnimal(const WrongAnimal &obj);
        WrongAnimal& operator=(const WrongAnimal &obj);
        std::string getType() const;
        ~WrongAnimal();
};

#endif