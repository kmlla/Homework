#include<cmath>
#include <iostream>
int main() {
	setlocale(LC_ALL, "russian");
	float x, eps;
	std::cout << "Введите х,eps\n";
	std::cin >> x >> eps;
	float sum = 0, curr = 1;
	while (abs(curr) >= eps)
	{
		sum += curr;
		curr *= x;
	}
	std::cout << sum << "  " << 1 / (1 - x);
}
