#include <iostream>


void shiftArray(int* a, int n, int k) {
	int* b = new int[n];
	k %= n;
	for (int i = 0; i < n; ++i) {
		if (i < k)
			b[n - k + i] = a[i];
		else
			b[i - k] = a[i];
	}
	for (int i = 0; i < n; ++i) 
		a[i] = b[i];
	delete[] b;
}


int main() {
	int N, l;
	std::cin >> N >> l;
	int* arr = new int[N];
	for (int i = 0; i < N; ++i) {
		std::cin >> arr[i];
	}
	shiftArray(arr, N, l);
	for (int i = 0; i < N; ++i) {
		std::cout << arr[i] << " ";
	}
	delete[] arr;
	return 0;
}
