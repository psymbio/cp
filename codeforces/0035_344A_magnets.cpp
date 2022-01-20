#include <iostream>
#include <string>
int main(int argc, char const *argv[]) {
	int n;
	std::cin >> n;
	if(n == 0) {
		std::cout << 0;
		return 0;
	}
	std::string magnet;
	char last;
	int magnet_groups = 1;
	std::cin >> magnet;
	last = magnet[1];
	for(int i = 1; i < n; i++) {
		std::cin >> magnet;
		if(last == magnet[0]) {
			magnet_groups++;
		}
		last = magnet[1];
	}
	std::cout << magnet_groups;
	return 0;
}
