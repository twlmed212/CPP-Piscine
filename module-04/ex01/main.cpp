#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "--- Animal tests ---" << std::endl;
     Animal* meta = new Animal[10];

    for (int i = 0; i < 10; i++){
        if (i % 2 == 0)
            meta[i] = new Dog();
        else
            meta[i] = new Cat();
    }

    for (int i = 0; i < 10; i++){
        meta[i]->makeSound();
    }
    delete[] meta;

    return 0;
}