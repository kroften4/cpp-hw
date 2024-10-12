#include <iostream>

int main2_2()
{
    float x, a;
    std::cout << "Enter x and a\n";
    std::cin >> x >> a;
    x = std::abs(x);
    if (x < 1 && x != 0)
        std::cout << a * std::log(x);
    else if (x >= 1 && a - x * x >= 0)
        std::cout << std::sqrt(a - x * x);
    else
        std::cout << "Math error";
    return 0;
}
