#include <iostream>
int main() {
    int n, a;
    std::cin >> n;
    a = n / 1000;
    n = n % 1000;
    for (int i = 0; i < a; ++i)
        std::cout << "M";
    if ((n / 100) == 9) {
        std::cout << "CM";
        n = n % 900;
    }
    else {
        a = n / 500;
        if (a == 1) {
            std::cout << "D";
            n = n % 500;
        }
    }
    a = n / 100;
    if (a == 4)
        std::cout << "CD";
    else {
        for (int i = 0; i < a; ++i)
            std::cout << "C";
    }
    n = n % 100;
    if ((n / 10) == 9) {
        std::cout << "XC";
        n = n % 90;
    }
    else {
        a = n / 50;
        if (a == 1) {
            std::cout << "L";
            n = n % 50;
        }
    }
    a = n / 10;
    if (a == 4)
        std::cout << "XL";
    else {
        for (int count = 0; count < a; ++count)
            std::cout << "X";
    }
    n = n % 10;
    if (n == 9) {
        std::cout << "IX";
        n = 0;
    }
    else {
        if ((n / 5) == 1) {
            std::cout << "V";
            n = n - 5;
        }
    }
    if (n == 4)
        std::cout << "IV";
    else {
        for (int count = 0; count < n; ++count)
            std::cout << "I";
    }
    return 0;
}
