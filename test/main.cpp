#include <iostream>

class Data {
    private:
        std::string last;
        static const int x = 20;
    public:
        std::string name;
        Data(std::string n, std::string l) : name(n), last(l) {};
        friend std::ostream& operator << (std::ostream& out, const Data& dt);
        friend void getName();
};

void getName(){
    std::cout << Data::x << std::endl;
}
std::ostream& operator << (std::ostream& out, const Data& dt){
    out << "first name: " << dt.name << std::endl
        << "Last name : " << dt.last << std::endl;
    return (out);
}

int main() {
    Data dt = Data("Mohamed", "Tawil");
    std::cout << dt;
    return (0);
}