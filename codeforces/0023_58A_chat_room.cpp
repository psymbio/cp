#include <iostream>
#include <string.h>
int main(int argc, char const *argv[]) {
	std::string input;
	std::cin >> input;
	int char_at = 0, present = 0;
	char hello[] = "hello";
	if(input.size() < 5) {
		std::cout << "NO";
	}
	for(int i = 0; i < input.size(); i++) {
		if(hello[char_at] == input[i]) {
			present += 1;
			char_at++;
		}
		if(present == 5) {
			std::cout << "YES";
			return 0;
		}
	}
	std::cout << "NO";
	return 0;
}
