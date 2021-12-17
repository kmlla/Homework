#include <iostream>


void shiftArray(int* a, int n, int k) {
	for (int i = 1; i <= n; ++i) {
		if (i <= k) {
			a[n - k + i] = i;
		}
		else {
			a[i - k] = i;
		}
	}
}

int main() {
	int N, l;
	std::cin >> N >> l;
	int* arr = new int[N];
	for (int i = 1; i <= N; ++i) {
		std::cin >> arr[i];
	}
	shiftArray(arr, N, l);
	for (int i = 1; i <= N; ++i) {
		std::cout << arr[i] << " ";
	}
	delete[] arr;
	return 0;
}
