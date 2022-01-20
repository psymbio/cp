#include <iostream>
int main(int argc, char const *argv[]) {
	// https://stackoverflow.com/questions/23445662/how-to-store-a-integer-value-equal-to-1018-in-c-programs-or-c
	unsigned long long n;
	std::cin >> n;
	int digit, count;
	while(n) {
		digit = n % 10;
		if(digit != 4 || digit != 7) {
			count += 1;
		}
		n /= 10;
	}
	if (count == 4 || count == 7) {
		std::cout << "YES";
	} else {
		std::cout << "NO";
	}
	return 0;
}
