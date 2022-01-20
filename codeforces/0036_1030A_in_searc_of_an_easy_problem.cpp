#include <iostream>
int main(int argc, char const *argv[]) {
	int n;
	std::cin >> n;
	int temp, sum = 0;
	for(int i = 0; i < n; i++) {
		std::cin >> temp;
		sum += temp;
	}
	if(sum >= 1) {
		std::cout << "HARD";
	} else {
		std::cout << "EASY";
	}
	return 0;
}
