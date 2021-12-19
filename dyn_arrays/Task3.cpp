#include <iostream>

int main() {
	int i, j, n, q = 1;
	std::cin >> n;
	int** a;
	a = new int* [n];

	for (int i = 1; i <= n; ++i)
	{
		a[i] = new int[n];
	}
	for (i = 1;i <= n;++i) {
		if (i % 2 == 1)
			for (j = 1;j <= n;++j) {
				a[i][j] = q;
				q++;
			}
		else
			for (j = n;j >= 1;--j) {
				a[i][j] = q;
				q++;
			}
	}
	for (i = 1;i <= n;++i) {
		std::cout << std::endl;
		for (j = 1;j <= n;++j) {
			std::cout << a[i][j] << " ";
		}
	}
	for (int i = 0; i < n; ++i) {
		delete[] a[i];
	}
	delete[] a;
	return 0;
}
