#include <iostream>
#include <string>

class Paper {
public:
    Paper(const std::string& n) : name(n) { std::cout << "create  " << name << std::endl; }
    virtual ~Paper()                      { std::cout << "destroy " << name << std::endl; }
private:
    std::string name;
};

int main()
{
    {
        Paper  a("stack paper");
        Paper* b = new Paper("heap paper");
        (void)b;
        std::cout << "-- end of block --" << std::endl;
        delete b;
    }
    std::cout << "-- after block --" << std::endl;
    return 0;
}