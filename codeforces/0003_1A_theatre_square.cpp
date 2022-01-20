#include <iostream>
int main(int argc, char const *argv[]) {
	long long int n, m, a;
	std::cin >> n >> m >> a;
	long long int length = n / a;
	if(n % a != 0) {
		length++;
	}

	long long int breadth = m / a;
	if(m % a != 0) {
		breadth++;
	}

	std::cout << length * breadth;
	return 0;
}
