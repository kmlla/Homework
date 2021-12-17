#include <iostream>

int main() {
    int n;
    int a[1000];
    std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        std::cin >> i[a];
    }
    int sum = 0, t = 0;
    for (int i = 1; i <= n; ++i) {
        if ((a[i] + a[i + 1]) > sum) {
            sum = a[i] + a[i + 1];
            t = i;
        }
    }
    std::cout << a[t] << " " << a[t + 1];
    return 0;
}
