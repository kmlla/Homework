#include<iostream>
#include<string>

std::string left(int num, int sp) {
	std::string res = std::to_string(num);
	int num_d = 0;
	do {
		++num_d;
		num /= 10;
	} while (num!=0);
	for (int i = 0; i < sp - num_d; ++i) {
		res += " ";
	}
	return res;
}

int main() {
	int n, m;
	std::cin >> n >> m;

	int** arr = new int* [m];
	int* sp = new int[m];

	for (int i = 0; i < m; ++i) {
		arr[i] = new int[n];
		int max = 0;
		for (int j = 0; j < n; ++j) {
			arr[i][j] = rand() % 100000;
			if (arr[i][j] > max)
				max = arr[i][j];
		}

		int num_d = 0;

		do {
			++num_d;
			max /= 10;
		} while (max!=0);

		sp[i] = num_d;
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) 
			std::cout << left(arr[j][i], sp[j]) << " ";
		std::cout << std::endl;
	}

	for (int i = 0; i < m; ++i)
		delete[] arr[i];
	delete[] arr;
	return 0;
}
