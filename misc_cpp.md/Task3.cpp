#include <iostream>
int main() {
    setlocale(LC_ALL, "russian");
    double x, y, R, r;
    std::cout << "Введите х,у";
    std::cin >> x >> y;
    std::cout << "Введите R,r";
    std::cin >> R >> r;
    double a = x * x + y * y;
    if ((a < R * R) && (a > r * r))
    {
        std::cout << "IN";
    }
    else {
        std::cout << "OUT";
    }
}
