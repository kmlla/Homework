#include <iostream>
int main() {
    int n;
    float x;
    std::cin >> n >> x;
    int* m = new int[n + 1];
    int s = 0;
    float k = 1;
    for (int i = 0; i <= n; ++i)
    {
        std::cin >> m[i];
        s += m[i] * k;
        k *= x;
    }
    std::cout << s << '\n';
    delete[] m;
    return 0;
}
