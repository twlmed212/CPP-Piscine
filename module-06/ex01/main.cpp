#include "Serializer.hpp"
#include <iostream>

int main()
{
    std::cout << sizeof(int) << " " << sizeof(void*) << " " << sizeof(uintptr_t);
    std::cout << std::endl<< std::endl;

    Data arr[2];
    uintptr_t r = Serializer::serialize(&arr[0]);
    Data* q = Serializer::deserialize(r + sizeof(Data));
    std::cout << (q == &arr[1]);
   
    std::cout << std::endl<< std::endl;
    std::cout << std::endl<< std::endl;
    

    Data data;
    data.id = 42;
    data.name = "Mohamed";

    uintptr_t raw = Serializer::serialize(&data);
    Data* back = Serializer::deserialize(raw);

    std::cout << "original address: " << &data << std::endl;
    std::cout << "serialized (raw): " << raw << std::endl;
    std::cout << "deserialized:     " << back << std::endl;

    if (back == &data)
        std::cout << "OK: same pointer" << std::endl;
    else
        std::cout << "KO: different pointer" << std::endl;

    std::cout << "back->id = " << back->id << ", back->name = " << back->name << std::endl;
    return 0;
}