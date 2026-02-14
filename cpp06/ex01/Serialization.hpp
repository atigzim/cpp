#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include "Data.hpp"

class Serialization
{
    private:
        Serialization();
        Serialization(const Serialization &other);
        Serialization &operator=(const Serialization &other);
        ~Serialization();

    public:
        static Data* deserialize(unsigned long raw);
        static unsigned long serialize(Data* ptr);
};

#endif