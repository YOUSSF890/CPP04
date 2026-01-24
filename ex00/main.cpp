#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"




int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();


    std::cout << "\n----------- makeSound -------------\n" << std::endl;

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    std::cout << "\n----------- copy constructor -------------\n" << std::endl;
    {
        const Animal obj(*j);
        obj.makeSound();
    }
    std::cout << "\n----------- copy assignment operator -------------\n" << std::endl;
    {
        Animal *obj0 = new Dog();
        Animal *obj1 = new Cat();
        *obj0 = *obj1;
        std::cout << obj0->getType() << " " << std::endl;
        std::cout << obj1->getType() << " " << std::endl;
        obj1->makeSound();
        obj0->makeSound();
        delete obj0;
        delete obj1;
    }
    std::cout << "\n----------- Do not use virtual -------------\n" << std::endl;
    {
        WrongAnimal *obj1 = new WrongAnimal;
        WrongAnimal *obj2 = new WrongCat();

        std::cout << obj1->getType() << " " << std::endl;
        std::cout << obj2->getType() << " " << std::endl;
        obj1->makeSound();
        obj2->makeSound();
        delete obj1;
        delete obj2;
    }

    std::cout << "\n----------- Destructor -------------\n" << std::endl;
    delete meta;
    delete j;
    delete i;

    return 0;
}
