#include <iostream>
// https://stackoverflow.com/questions/52072951/prime-generator-prime1-on-spoj
// basically we can't submit this code because

// You cannot create 10^9 (int a[n] ) array in given time constraint!
// The nested for loops are taking too long almost O(sqrt(n-m)^2)
bool prime_find(int n) {
	if(n <= 1)
		return false;
	if(n <= 3)
		return true;
	if(n % 2 == 0 || n % 3 == 0)
		return false;
	for(int i = 5; i * i <= n; i = i + 5) {
		if(n % i == 0 || n % i + 2 == 0) {
			return false;
		}
	}
	return true;
}

void print_primes(int a, int b) {
	for (int i = a; i <= b; i++) {
		if(prime_find(i))
			std::cout << i << "\n";
	}
}
int main(int argc, char const *argv[]) {
	int n;
	std::cin >> n;
	while(n) {
		long long int a, b;
		std::cin >> a >> b;
		print_primes(a, b);
		n--;
	}
	return 0;
}
