#include <iostream>
int main()
{
    int n;
    double s=0;
    std::cin >> n;
    for (int i = 1;i <= n;++i)
        s += double(1. / i);
    std::cout << s;
    return 0;

}
