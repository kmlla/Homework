
#include<iostream>
int main()
{
    int N;
    std::cin >> N;
    int A[1000];
    int sum = N * (N + 1) / 2;
    int sum1 = 0;
    for (int i = 1; i <= N; ++i) {
        std::cin >> A[i];
        sum1 += A[i];
    }
    std::cout << sum - sum1;
    return 0;
}
