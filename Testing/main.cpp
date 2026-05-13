#include <iostream>

class Animal {
    public:
    virtual void makeSound() const = 0;
};

class Cat : public Animal {
    public:
        int x = 1;
        void makeSound() const
        {
            std::cout << "meaw" << std::endl;
        }
};

class Dog : public Cat {
    public:
        int x = 2;
        void makeSound() const
        {
            std::cout << "dog" << std::endl;
        }
        
};

int main() {
    Dog *cat = new Dog();
    cat->makeSound();
}