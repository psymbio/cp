#include <iostream>
#include <iomanip>

int main(int argc, char const *argv[]) {
	int n, temp;
	long double sum = 0;
	std::cin >> n;
	for(int i = 0; i < n; i++) {
		std::cin >> temp;
		sum += temp;
	}
	std::cout << std::fixed << std::setprecision(12) << sum / n;
	return 0;
}
