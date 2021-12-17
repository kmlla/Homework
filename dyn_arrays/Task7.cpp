#include <iostream>


int main() {
	int n, m, i, j, q = 0, w = 1, k;
	std::cin >> n >> k;
	int a[100], b[100];
	for (i = 1;i <= n;i++)std:: cin >> a[i];
	for (i = 1;i <= n;i++) {
		if (i <= k) {
			b[n - k + i] = a[i];
		}
		else {
			b[i - k] = a[i];
		}
	}
	for (i = 1;i <= n;i++) std::cout << b[i] << " ";
	return 0;
}
