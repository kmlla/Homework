#include <iostream>

int main() {
    int n;
    std::cin >> n;
    double d = 0.;
    for (int i = 0; i < n; i++)
    {
        double x = (double)rand() / RAND_MAX, y = (double)rand() / RAND_MAX;
        d += (x * x + y * y);
        if (d <= 1) {
            d += 1;
        }
    }
    std::cout << (d / (double)n) << std::endl;
    return 0;
}
