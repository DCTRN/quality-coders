#include <iostream>

int main()
{
    constexpr int size{3};
    int arr[size] = {10, 20, 30};
    int *ptr = arr;

    for (int i{0}; i < size; i++)
    {
        std::cout << i << ": " << *ptr << std::endl;
        ptr++;
    }

    return 0;
}
