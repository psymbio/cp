#include <iostream>

int main(int argc, char const *argv[]) {
	long long int a, b, c, result;
	std::cin >> a >> b >> c;
	result = a + b + c;
	result = std::max(result, a + b * c);
	result = std::max(result, a * (b + c));
	result = std::max(result, a * b * c);
	result = std::max(result, (a + b) * c);
	std::cout << result;
	return 0;
}
