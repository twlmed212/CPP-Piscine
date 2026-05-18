#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "--- Being of tests ---" << std::endl;
    const Animal* j    = new Dog();
    const Animal* i    = new Cat();

    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;

    i->makeSound();
    j->makeSound();

    delete i;
    delete j;

    std::cout << "\n--- WrongAnimal tests ---" << std::endl;
    const WrongAnimal* wMeta = new WrongAnimal();
    const WrongAnimal* wCat  = new WrongCat();

    wMeta->makeSound();
    wCat->makeSound();

    delete wCat;
    delete wMeta;


    std::cout << "--- Brain Testing ---" << std::endl;
    Animal* animal[10];
    std::cout << "---  array of animals created ---" << std::endl;

    for (int i = 0; i < 10; i++){
        if (i < 5)
            animal[i] = new Dog();
        else
            animal[i] = new Cat();
    }

    for (int i = 0; i < 10; i++){
        animal[i]->makeSound();
    }

    for (int i = 0; i < 10; i++){
        delete animal[i];
    }

    std::cout << "\n--- Deep Copy Test ---" << std::endl;
    Dog dog1;
    dog1.getBrain()->setIdea(0, "I want to play");
    std::cout << "Dog1: " << dog1.getBrain()->getIdeas()[0] << std::endl;
    std::cout << "\n--------------------" << std::endl;

    Dog dog2(dog1);
    dog2.getBrain()->setIdea(0, "I want to eat");
    std::cout << "Dog2: " << dog2.getBrain()->getIdeas()[0] << std::endl;
    std::cout << "\n--------------------" << std::endl;

    Dog dog3;
    dog3 = dog1;
    dog3.getBrain()->setIdea(0, "I want to dance");
    std::cout << "Dog3: " << dog3.getBrain()->getIdeas()[0] << std::endl;
    std::cout << "\n--------------------" << std::endl;

    return 0;
}