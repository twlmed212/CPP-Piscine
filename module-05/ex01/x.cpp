#include <iostream>
class Parent {
    public:
        Parent() {
            std::cout << "Parent constructor called" << std::endl;
        }
        ~Parent() {
            std::cout << "Parent destructor called" << std::endl;
        }
        virtual void display() = 0;
        
};

class Child : public Parent {
    public:
        Child() {
            std::cout << "Child constructor called" << std::endl;
        }
        void display() override {
            std::cout << "Child display function called" << std::endl;
        }
        ~Child() {
            std::cout << "Child destructor called" << std::endl;
        }
  
};
int main()
{
    Parent obj;
    std::cout << std::endl;
    std::cout << std::endl;
    obj.display();
    std::cout << std::endl;
    std::cout << std::endl;

    std::cout << "Hello World!" << std::endl;
    return 0;
}