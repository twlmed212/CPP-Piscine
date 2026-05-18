#include <iostream>

class Animal {
    public:
        Animal() {
            std::cout << "Animal Constructor" << std::endl;
        }
        virtual void makeSound() const = 0;
        virtual ~Animal() {
            std::cout << "Freeing Animal object " << std::endl;
        }
};

class Cat : public Animal {
    public:
        int x = 1;
        Cat () {
            std::cout << "Cat Constructor" << std::endl;
        }
        void makeSound() const
        {
            std::cout << "meaw Sound" << std::endl;
        }
        ~Cat() {
            std::cout << "Freeing Cat object " << std::endl;
        }
};

class Dog : public Cat {
    public:
        int x = 2;
        Dog () {
            std::cout << "Dog Constructor" << std::endl;
        }

        void makeSound() const
        {
            std::cout << "Dog Sound" << std::endl;
        }
        ~Dog() {
            std::cout << "Freeing Dog object " << std::endl;
        }
        
};

int main() {
    Animal *cat = new Dog();
    cat->makeSound();
    delete cat;
}