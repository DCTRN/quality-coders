#include <iostream>
#include <vector>
#include <functional>

int main()
{
    int value1{1};
    int value2{2};

    std::vector<int *> vec1 = {&value1, &value2};
    // std::vector<int &> vec2 = {value1, value2}; // compilation error
    std::vector<std::reference_wrapper<int>> vec3 = {value1, value2};

    return 0;
}
