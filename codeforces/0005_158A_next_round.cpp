#include <iostream>
int main(int argc, char const *argv[]) {
	int n, k, temp, result = 0;
	std::cin >> n >> k;
	int scores[n];
	for(int i = 0; i < n; i++) {
		std::cin >> temp;
		scores[i] = temp;
	}
	for(int i = 0; i < n; i++) {
		if(scores[i] >= scores[k-1] && scores[i] > 0) {
			result++;
		}
	}
	std::cout << result;
	return 0;
}
