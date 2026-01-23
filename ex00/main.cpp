#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"




int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();


    std::cout << "----------- makeSound -------------" << std::endl;

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    std::cout << "----------- copy constructor -------------" << std::endl;
    const Animal obj(*j);
    
    
    
    std::cout << "----------- Destructor -------------" << std::endl;
    delete meta;
    delete j;
    delete i;

    return 0;
}

// int main()
// {
//     Animal *obj0 = new Animal;
//     Animal *obj1 = new Cat();

//     // WrongAnimal *obj3 = new WrongAnimal;
//     // WrongAnimal *obj2 = new WrongCat();

//     obj0->makeSound();
//     obj1->makeSound();

//     // obj2->makeSound();
//     // obj2->makeSound();

    
//     delete obj0;
// }