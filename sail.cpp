#include<iostream>
int main() {
    double x;
    double y;
    std::cin >> x >> y;
    if ((y >= 0) && (x <= 0) && (x >= -1) && (y <= 2 + 2 * x))
        std::cout << "True" << '\n';
    else if ((y >= 0) && (x >= 0) && (x <= 1) && (y <= -2 * x + 2))
        std::cout << "True" << '\n';
    else if ((y <= 0) && (x <= 0) && (((x + 1) * (x + 1) + y * y <= 1)))
        std::cout << "True" << '\n';
    else if ((y <= 0) && (x >= 0) && (((x - 1) * (x - 1) + y * y <= 1)))
        std::cout << "True" << '\n';
    else std::cout << "False" << '\n';
    return 0;
}
