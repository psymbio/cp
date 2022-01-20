#include <iostream>
int main(int argc, char const *argv[]) {
	int k, n, w;
	std::cin >> k >> n >> w;
	int total_cost = 0, needs_to_borrow;
	for(int i = 1; i <= w; i++) {
		total_cost += i * k;
	}
	if(total_cost > n) {
		std::cout << total_cost - n;
	} else {
		std::cout << 0;
	}
	return 0;
}
