#include <iostream>
int main()
{
    int k = 0;
    double s = 0;
    double eps;
    std::cin >> eps;
    for (int i = 1;(1. / i) >= eps;i += 2)
    {
        if (k % 2 == 0) {
            s += 4. / i;
        }
        else {
            s -= 4. / i;
        }
        k += 1;
    }
    std::cout << s;
    return 0;
}
