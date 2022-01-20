#include <iostream>
#include <cmath>

int main(int argc, char const *argv[]) {
	unsigned long long int n, k, i, result;
	std::cin >> n >> k;

	// std::cout << "k: " << k << "\n";
	if(n % 2 == 0) {
		if(k <= n/2) {
			// find odd
			for(i = 0; i < k*2; i++) {
				if(i % 2 != 0) {
					result = i;
				}
			}
		} else {
			if(k % 2 == 0) {
				for(i = 1; i < k/2; i++) {
					if(i % 2 == 0) {
						result = i;
					}
				}
			} else {
				for(i = 1; i < k/2 + 1; i++) {
					if(i % 2 == 0) {
						result = i;
					}
				}
			}
		}
	} else {
		if(k <= n/2 + 1) {
			for(i = 0; i < k*2 + 1; i++) {
				if(i % 2 != 0) {
					result = i;
				}
			}
		} else {
			for(i = 1; i < k*2 - (n/2 + 1); i++) {
				if(i % 2 == 0) {
					result = i;
					std::cout << i;
				}
			}
		}
	}
	std::cout << result;
	return 0;
}
