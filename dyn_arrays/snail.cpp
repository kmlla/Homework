#include <iostream>

int main() {
	int n, m, i, j, q = 0, w = 1;
	std::cin >> n >> m;
	int a[100][100];
	while (q <= n / 2) {
		for (i = q;i < m - 1 - q;i++) {
			a[q][i] = w;
			w++;
		}
		if (q == n / 2) {
			a[q][m - q - 1] = n * m;
			break;
		}
		for (i = q;i < n - 1 - q;i++) {
			a[i][m - q - 1] = w;
			w++;
		}
		if (q == m / 2) {
			a[n - 1 - q][m - q - 1] = n * m;
			break;
		}
		for (i = m - 1 - q;i > q;i--) {
			a[n - 1 - q][i] = w;
			w++;
		}
		if (n / 2 == n - q - 1) {
			a[n - 1 - q][q] = n * m;
			break;
		}
		for (i = n - 1 - q;i > q;i--) {
			a[i][q] = w;
			w++;
		}
		q++;
	}
	for (i = 0;i < n;i++) {
		std::cout << std::endl;
		for (j = 0;j < m;j++)
			std::cout << a[i][j] << " ";
	}
	return 0;
}
