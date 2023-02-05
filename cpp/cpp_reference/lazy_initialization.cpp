#include <iostream>

int main()
{
    int value{5};

    int *ptr{nullptr};
    // int &invalidRef; //compilation error
    int &ref{value};
    ptr = &value;

    std::cout << "ref: " << ref << std::endl;
    std::cout << "ptr: " << *ptr << std::endl;
    ptr = nullptr;

    return 0;
}
