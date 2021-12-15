#include <iostream>
int main() {
    int n;
    double s = 1;
    double a = 1. / 2;
    std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        s += a;
        a /= 2;
    }
    std::cout << s << std::endl;
    return 0;
}
