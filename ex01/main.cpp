// #include "Dog.hpp"
// #include "Cat.hpp"
#include "WrongCat.hpp"

// int main()
// {
//     Animal* meta = new Animal();
//     Animal* j = new Dog();
//     Animal* i = new Cat();

//     std::cout << j->getType() << std::endl;
//     std::cout << i->getType() << std::endl;

//     i->makeSound();
//     j->makeSound();
//     meta->makeSound();

//     delete meta;
//     delete j;
//     delete i;

//     return 0;
// }


int main()
{
    WrongAnimal* meta = new WrongAnimal();
    WrongAnimal* i = new WrongCat();

    std::cout << i->getType() << std::endl;

    i->makeSound();
    meta->makeSound();

    delete meta;
    delete i;

    return 0;
}


