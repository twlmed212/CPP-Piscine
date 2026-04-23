#include <iostream>

int main() {
    try {
        int* x = new int[9223372036854707];

    }catch (std::bad_alloc& e)
    {
        std::cout << "Failed + " << e.what();
        return (0);
    }

    return 0;
}