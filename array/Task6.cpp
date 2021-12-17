#include<iostream>

int main() {
    int n;
    int a[1000];
    std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        std::cin >> i[a];
    }
    int k = 1;
    int d = a[2] - a[1];
    for (int i = 1; i < n; ++i) {
        if ((a[i + 1] - a[i]) != d) {
            k = 0;
            break;
        }
    }
    if (k == 1) {
        std::cout << d;
    }
    else {
        std::cout << 0;
    }
    return 0;
}
