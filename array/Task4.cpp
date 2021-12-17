#include <iostream>
int main() {
    int n;
    int a [100];
    std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        std::cin >> i[a];
    }
    int n1 = n;
    for (int i = 1; i <= n / 2; ++i) {
        std::cout << a[i] << " ";
        std::cout << a[n1] << " ";
        --n1;
    }
    if (n % 2 != 0) {
        std::cout << a[n / 2] + 1;
    }
    return 0;

}
