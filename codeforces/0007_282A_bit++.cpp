#include <iostream>
int main(int argc, char const *argv[]) {
	int n, x = 0;
	std::cin >> n;
	char temp[4];
	for(int i = 0; i < n; i++) {
		std::cin >> temp;
		if(temp[1] == '+') {
			x++;
		} else {
			x--;
		}
	}
	std::cout << x;
	return 0;
}
