#include <iostream>
#include <cmath>

int main() {
    int a, b, c;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    int D = b * b - 4 * a * c;
    if (D < 0) {
        std::cout << "no real solutions"<<std::endl;
    }
    else if (D == 0) {
        std::cout << "one solution: " << -b / 2 / a << std::endl;
    }
    else {
        int x1 = (-b + sqrt(D)) / 2 / a;
        int x2 = (-b - sqrt(D)) / 2 / a;
        std::cout << "two solutions: " << x1 << "," << x2 << std::endl;
    }


    return 0;
}
