#include "iter.hpp"

template <typename T>
void print(const T& x)
{
    std::cout << x << std::endl;
}


int main()
{
    int arr[] = {1, 2, 3, 4};
    size_t len = 4;

    iter(arr, len, print);

    return 0;
}