#include <iostream>
#include <cstdint>

struct Point
{
    std::uint64_t x{0};
    std::uint64_t y{0};
};

int main()
{
    Point point1{5, 5};

    Point *ptr{&point1};
    Point &ref{point1};

    std::cout << "ptr size: " << sizeof(ptr) << " address: " << &ptr << std::endl;
    std::cout << "dereferenced ptr size: " << sizeof(*ptr) << " address: " << &*ptr << std::endl;
    std::cout << "ref size: " << sizeof(ref) << " address: " << &ref << std::endl;

    return 0;
}
