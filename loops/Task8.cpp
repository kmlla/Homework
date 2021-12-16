#include <iostream>

int main()
{
    int n;
    int s=0;
    int p=1;
    std::cin >> n;
    while (n > 0) {
        s += n % 10;
        p *= n % 10;
        n /= 10;
    }
    std::cout << s << " " << p;
    return 0;
} 
