#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "--- Animal tests ---" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j    = new Dog();
    const Animal* i    = new Cat();

    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;

    i->makeSound();    // Cat sound
    j->makeSound();    // Dog sound
    meta->makeSound(); // Animal sound

    delete i;
    delete j;
    delete meta;

    std::cout << "\n--- WrongAnimal tests ---" << std::endl;
    const WrongAnimal* wMeta = new WrongAnimal();
    const WrongAnimal* wCat  = new WrongCat();

    wMeta->makeSound();
    wCat->makeSound();

    delete wCat;
    delete wMeta;

    return 0;
}