#include <iostream>
#include <string.h>
#include <algorithm>

int main(int argc, char const *argv[]) {
	std::string input, input2;
	std::cin >> input >> input2;
	std::reverse(input.begin(), input.end());
	if(input2 == input) {
		std::cout << "YES";
	} else {
		std::cout << "NO";
	}
	return 0;
}
