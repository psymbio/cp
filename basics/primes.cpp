#include <iostream>
bool is_prime(int n) {
	if (n <= 1)
		return false;
	if (n <= 3)
		return true;

	// if this condition is checked we can skip by 5 in the next loop
	if (n % 2 == 0 || n % 3 == 0)
		return false;
	for (int i = 5; i * i <= n; i = i + 5) {
		if (n % i == 0 || n % (i + 2) == 0)
			return false;
	}
	return true;
}


void print_primes(int n) {
	for (int i = 2; i <= n; i++) {
		if(is_prime(i))
			std::cout << i << "\n";
	}
}
int main(int argc, char const *argv[]) {
	int n;
	std::cin >> n;
	print_primes(n);
	return 0;
}
