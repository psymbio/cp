#include <iostream>
int main(int argc, char const *argv[]) {
	int n, temp, count = 0, result = 0;
	std::cin >> n;
	for(int i = 0; i < n; i++) {
		count = 0;
		for(int j = 0; j < 3; j++) {
			std::cin >> temp;
			count += temp;
		}
		if(count >= 2) {
			result++;
		}
	}
	std::cout << result;
	return 0;
}
