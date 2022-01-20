#include <iostream>
int main(int argc, char const *argv[]) {
	int n, h;
	std::cin >> n >> h;
	int heights[n];
	int width = 0;
	for(int i = 0; i < n; i++) {
		std::cin >> heights[i];
		if(heights[i] > h) {
			width++;
		}
	}
	std::cout << width + n;
	return 0;
}
