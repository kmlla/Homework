#include<iostream>

double mysqrt(double x, double eps = 1e-6) {
	double z0 = 1.0;
	double z1 = z0 - (z0 * z0 - x) / (2 * z0);
	while (std::abs(z0 - z1) > eps) {
		z0 = z1;
		z1 = z0 - (z0 * z0 - x) / (2 * z0);
	}
	return z1;
}

int main() {
	int n;
	std::cin >> n;
	std::cout << mysqrt(n);
	return 0;
}
