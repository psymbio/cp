#include <iostream>

int main(int argc, char const *argv[]) {
	int n;
	std::cin >> n;
	int max = 0, a, b, temp = 0;
	for(int i = 0; i < n; i++) {
		std::cin >> a >> b;
		temp += b - a;
		if(temp > max) {
			max = temp;
		}
	}
	std::cout << max;
	return 0;
}
