#include <iostream>

class Data {
    public:
        int x = 230;

};

std::ostream& operator<<(std::ostream& out, const Data& src){
    out << src.x;
    return out;
}

int main() {
    Data dt = Data();
    std::cout << dt << std::endl;
    return 0;
}