#include "Cat.hpp"
#include "WrongCat.hpp"
// #include "Dog.hpp"


int main()
{
    // const Animal* j = new Dog();
    // Animal* i = new Cat();
    // Animal* a = new Cat();

    Cat obj1;
    Cat obj2(obj1);


    obj1 = obj1;



    // delete j;//should not create a leak
    // delete i;
    // delete a;
    return 0;
}