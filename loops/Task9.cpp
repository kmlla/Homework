#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int n1 = n, k = 0;
    while ((n1 /= 2) != 0)
        ++k;
    int k1 = 1 << k;
    while (k1 != 0) {
        std::cout << (n / k1);
        n %= k1;
        k1 >>= 1;
    }
    std::cout << "\n";
    return 0;
}
