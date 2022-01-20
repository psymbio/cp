#include <iostream>
int main(int argc, char const *argv[]) {
	int n, x, y, z, xsum = 0, ysum = 0, zsum = 0;
	std::cin >> n;
	for(int i = 0; i < n; i++) {
		std::cin >> x >> y >> z;
		xsum += x;
		ysum += y;
		zsum += z;
	}
	if(xsum == 0 && ysum == 0 and zsum == 0) {
		std::cout << "YES";
	} else {
		std::cout << "NO";
	}
	return 0;
}
