#include <iostream>
int main(int argc, char const *argv[]) {
	int n;
	std::cin >> n;
	int p, q, rooms = 0;
	for(int i = 0; i < n; i++) {
		std::cin >> p >> q;
		if(q - p >= 2) {
			rooms += 1;
		}
	}
	std::cout << rooms;
	return 0;
}
