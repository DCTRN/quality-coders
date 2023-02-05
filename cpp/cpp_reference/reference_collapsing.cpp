#include <iostream>

int main()
{
    using lref = int &;
    using rref = int &&;
    int n{0};

    lref &r1 = n;  // type of r1 is int&
    lref &&r2 = n; // type of r2 is int&
    rref &r3 = n;  // type of r3 is int&
    rref &&r4 = 1; // type of r4 is int&&

    std::cout << "r1: " << r1 << std::endl;
    std::cout << "r2: " << r2 << std::endl;
    std::cout << "r3: " << r3 << std::endl;
    std::cout << "r4: " << r4 << std::endl;

    return 0;
}
