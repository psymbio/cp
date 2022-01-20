#include <iostream>
#include <string.h>

int main(int argc, char const *argv[]) {
	std::string input;
	std::cin >> input;
	int consecutive = 0;
	if(input.size() < 7) {
		std::cout << "NO";
		return 0;
	} else {
		for(int i = 1; i < input.size(); i++) {
			if(input[i - 1] == input[i]) {
				consecutive += 1;
			} else {
				consecutive = 1;
			}
			if(consecutive == 7) {
				std::cout << "YES";
				return 0;
			}
		}
	}
	std::cout << "NO";
	return 0;
}
