#include <iostream>

#include "utils/Adder.hpp"

int main()
{
    int a{5};
    int b{10};

    int result = utils::add(a, b);

    std::cout << "result of a + b = " << result << std::endl;

    return 0;
}
