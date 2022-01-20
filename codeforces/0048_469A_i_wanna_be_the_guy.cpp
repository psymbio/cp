#include <iostream>
int main(int argc, char const *argv[]) {
	int n, p, q, sum = 0;
	std::cin >> n;
	int levels[n] = {0};
	std::cin >> p;
	int temp;
	for(int i = 0; i < p; i++) {
		std::cin >> temp;
		levels[temp - 1] = 1;
	}

	std::cin >> q;
	for(int i = 0; i < q; i++) {
		std::cin >> temp;
		levels[temp - 1] = 1;
	}

	for(int i = 0; i < n; i++) {
		sum += levels[i];
	}
	if(sum == n) {
		std::cout << "I become the guy.";
	} else {
		std::cout << "Oh, my keyboard!";
	}
	return 0;
}
