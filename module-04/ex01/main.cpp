#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
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

    return 0;
}