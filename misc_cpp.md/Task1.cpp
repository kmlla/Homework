#include <iostream>

int main() {
    unsigned char c = 0;
    do {
        std::cout << (int)c << "\n";
        ++c;
    } while (c !=0 );
    return 0;
}
