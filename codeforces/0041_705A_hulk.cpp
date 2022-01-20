#include <iostream>
#include <string>
int main(int argc, char const *argv[]) {
	int n;
	std::cin >> n;
	std::string result;
	for(int i = 0; i < n; i++) {
		if(i == n-1) {
			if(i % 2 == 0) {
				result += "I hate it";
			} else {
				result += "I love it";
			}
		} else {
			if(i % 2 == 0) {
				result += "I hate that ";
			} else {
				result += "I love that ";
			}
		}
	}
	std::cout << result;
	return 0;
}
