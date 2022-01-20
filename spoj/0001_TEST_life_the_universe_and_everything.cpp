#include <iostream>

int main(int argc, char const *argv[]) {
	int n;
	while(1) {
		std::cin >> n;
		if(n == 42) break;
		std::cout << n << "\n";
	}
	return 0;
}
