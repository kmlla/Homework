#include <iostream>

int main() {
	int i, j, n, m,q=1;
	std::cin >> n >> m;
	int** a;
	a = new int* [n];

	for (int i = 1; i <= n; ++i)
	{
		a[i] = new int[m];
	}
	for (i = 1;i <= n;i++) {
		if (i % 2 == 1)
			for (j = 1;j <= m;j++) {
				a[i][j] = q;
				q++;
			}
		else
			for (j = m;j >= 1;j--) {
				a[i][j] = q;
				q++;
			}
	}
	for (i = 1;i <= n;i++) {
		std::cout << std::endl;
		for (j = 1;j <= m;j++) {
			std::cout << a[i][j] << " ";
		}
	}
	delete[] a;
	return 0;
}
