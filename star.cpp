#include <iostream>
#include <cmath>


bool in_star(double x, double y)
{
    double r = std::sqrt(x * x + y * y);
    double a = 0.0;
    double pi = 3.1415926535;
    if (x > 0.0) {
        if (y >= 0.0) {
            a = std::atan(y / x);
        }
        else {
            a = std::atan(y / x) + 2 * pi;
        }
    }
    else if (x < 0.0) {
        a = std::atan(y / x) + pi;
    }
    else {
        if (y > 0.0) {
            a = pi/2;
        }
        else if (y < 0.0) {
            a = 3 * pi/2;
        }
    }

    double srad = 5.0 * std::cos((2 * std::asin(1.0) + pi * 3) / 10) / std::cos((2 * std::asin(cos(5.0 * a)) + 3.0 * pi) / 10);

    bool in_star = r <= srad;

    return in_star;
}

int main()
{
    double x, y;
    std::cin >> x >> y;

    if (in_star(x,y)) {
        std::cout << "Point is in the star!" << std::endl;
    }
    else {
        std::cout << "You loose" << std::endl;
    }

    return 0;
}
