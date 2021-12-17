#include <iostream>
int main()
{
    int n, x;
    std::cin >> n >> x;
    int* a = new int[n + 1];
    for (int i = n; i >= 0; --i)
    {
        std::cin >> a[i];
    }
    int s = a[n];
    for (int i = 1; i <= n; ++i)
    {
        s *= x;
        s += a[n - i];
    }
    std::cout << s << std::endl;
    return 0;
}
