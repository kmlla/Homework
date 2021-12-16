#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int d = 1;
    int n1 = n;
    while ((n1 /= 16) != 0)
        d *= 16;
    while (d != 0) {
        if ((n / d) < 10) {
            std::cout << (n / d);
        }
        else {
            std::cout << char(((n / d) % 10) + 65);
        }
        n %= d;
        d /= 16;
    }
    std::cout << std::endl;
    return 0;
}
