#include <iostream>

int main() {
    int n, deg;
    std::cin >> n >> deg;
    int d = 1;
    int n1 = n;
    while ((n1 /= deg) != 0)
        d *= deg;
    while (d != 0) {
        if ((n / d) < 10) {
            std::cout << (n / d);
        }
        else {
            std::cout << char(((n / d) % 10) + 65);
        }
        n %= d;
        d /= deg;
    }
    std::cout << std::endl;
    return 0;
}
