#include<iostream>
int main() {
    float x, y;
    std::cin >> x >> y;
    bool a = false;
    if (((x + 1) * (x + 1) + y * y < 1) && (y <= 0)) 
        a = true;
    if (((x - 1) * (x - 1) + y * y < 1) && (y <= 0)) 
        a = true;
    if ((y <= x / 2 + 2) && (x <= 0) && (x >= -1) && (y >= 0)) 
        a = true;
    if ((y <= x / 2 + 2) && (x <= 0) && (x >= -1) && (y >= 0)) 
        a = true;
    if ((y <= -2 * x + 2) && (x <= 1) && (x >= 0) && (y >= 0)) 
        a = true;

    if (a) std::cout << "in";
    if (!a) std::cout << "out";
}
