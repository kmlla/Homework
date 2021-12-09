#include <iostream>
int main()
{
    float a;
    float b;
    float c;
    float d;
    float x;
    std::cin >> a >> b >> c >> d >> x;
    float y = 0;
    y = c + (x - a) * (d - c) / (b - a);
    std::cout << y;
    return 0;
}
