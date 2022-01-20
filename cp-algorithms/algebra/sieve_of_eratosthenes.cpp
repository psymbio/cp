#include <iostream>
#include <vector>
int main(int argc, char const *argv[]) {
	int n;
	std::cout << "Enter a value till which you want to find all primes: ";
	std::cin >> n;
	std::vector<bool> is_prime(n, true);
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i <= n; i++) {
		if (is_prime[i] && (long long) i * i <= n) {
			for (int j = i * i; j <= n; j += i) {
				is_prime[j] = false;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		if (is_prime[i] == true) {
			std::cout << i << "\t";
		}
	}
	return 0;
}
