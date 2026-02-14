#include "Serialization.hpp"

Serialization::Serialization()
{
}

Serialization::~Serialization()
{
}

Serialization::Serialization(const Serialization &other)
{
    (void)other;
}

Serialization &Serialization::operator=(const Serialization &other)
{
    (void)other;
    return (*this);
}

Data* Serialization::deserialize(unsigned long raw)
{
    return (reinterpret_cast<Data*>(raw));
}

unsigned long Serialization::serialize(Data* ptr)
{
    return (reinterpret_cast<unsigned long>(ptr));
}

