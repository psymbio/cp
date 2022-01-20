#include <iostream>
int main(int argc, char const *argv[]) {
	int x;
	std::cin >> x;
	int rem = (x % 5)? 1 : 0;
	std::cout << (int)x / 5 + rem;
	return 0;
}
