#include "Data.hpp"
#include <iostream>
#include <stdint.h>

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}


int main()
{
    Data data;
    data.id = 42;

    Data* originalPtr = &data;

    uintptr_t raw = serialize(originalPtr);
    Data* newPtr = deserialize(raw);

    if (newPtr == originalPtr)
        std::cout << "Success: Pointers are equal!\n";
    else
        std::cout << "Error: Pointers are NOT equal!\n";

    return 0;
}