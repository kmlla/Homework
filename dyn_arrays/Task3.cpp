#include<iostream>

void snakeArray(int** A, int n) {
	int k = 0;
	for (int i = 0; i < n; ++i) {
		if (i % 2 == 0) {
			for (int j = 0; j < n; ++j) {
				++k;
				A[i][j] = k;
			}
		}
		else {
			for (int j = n - 1; j >= 0; --j) {
				++k;
				A[i][j] = k;
			}
		}
	}
}

int main() {
	int n;
	std::cin >> n;
	int** a = new int* [n];
	for (int i = 0; i < n; ++i)
		a[i] = new int[n];
	snakeArray(a, n);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
			std::cout << a[i][j] << " ";
		std::cout << "\n";
	}
	for (int i = 0; i < n; ++i)
		delete[] a[i];
	delete[] a;
	return 0;
}
