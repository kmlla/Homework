#include <iostream>

int main()
{
    double eps, x1, x2, dx;
    std::cin >> x1 >> x2 >> dx >> eps;
    std::cout << "x\tf(x)\tsin(x)\n";
    for (;x1 <= x2;x1 += dx)
    {
        std::cout << x1 << "\t";
        double curr = x1;
        double sum = 0;
        int counter = 1;
        while (std::abs(curr) >= eps)
        {
            sum += curr;
            counter += 2;
            curr = -1 * curr * x1 * x2 / (counter * (counter-1));
        }
        std::cout << sum << "\t" << sin(x1) << "\n";
    }
    return 0;
}
