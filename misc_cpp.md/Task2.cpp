#include <iostream>
#include <cmath>
int main()
{
    double a, b, c, D, x1, x2; 
    std::cin >> a >> b >> c;
    if (a == 0) {
        std::cout << -(c / b);
    }
    else {
        D = b * b - 4 * a * c;
        if (D > 0)
        {
            x1 = ((-b) + sqrt(D)) / (2 * a);
            x2 = ((-b) - sqrt(D)) / (2 * a);
            std::cout << "two solutions: " << x1 << "," << x2 << "\n";
        }
        if (D == 0)
        {
            x1 = -(b / (2 * a));
            std::cout << "one solution:" << x1 << "\n";
        }
        if (D < 0)
            std::cout << "no real solutions";
    }
    return 0;
}
