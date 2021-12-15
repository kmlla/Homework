#include <iostream>
#include <cmath>
int main() {
    double x;
    int n;
    std::cin >> x;
    std::cin >> n;
    double s = 0;
    double s1 = sin(x);
    int a = 1;
    while (a <= n) {
        s += s1;
        s1 = sin(s1);
        a += 1;
    }
    std::cout << s << std::endl;
    return 0;
}
