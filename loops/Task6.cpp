#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int maxx = 0, k = 0;
    while (n != 1) {
        if (n % 2 == 0) 
            n = n / 2;
        else
            n = n * 3 + 1;
        if (n > maxx)
            maxx = n;
        ++k;
    }
    std::cout << k << " " << maxx;
  return 0;
}
