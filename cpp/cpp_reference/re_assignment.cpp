#include <iostream>

struct Point
{
    int x{0};
    int y{0};

    void describe(const char *id) const
    {
        std::cout << id << " x: " << x << " y: " << y << std::endl;
    }
};

int main()
{
    Point point1{5, 5};
    Point point2{6, 6};

    Point *ptr{&point1};
    Point &ref{point1};

    ptr->x *= 10;
    ref.y *= 10;

    point1.describe("point1");
    point2.describe("point2");
    ref.describe("ref");
    ptr->describe("ptr");
    std::cout << "====================" << std::endl;

    ptr = &point2;
    ref = point2;

    ptr->x *= 10;
    ref.y *= 10;

    point1.describe("point1");
    point2.describe("point2");
    ref.describe("ref");
    ptr->describe("ptr");

    return 0;
}
