#include <iostream>
#include <string.h>
void to_upper(std::string &input) {
	// pass by ref to save space
	for(int i = 0; i <= input.size(); i++) {
		if(input[i] >= 'a' && input[i] <= 'z') {
			input[i] -= 32;
		}
	}
}
int main(int argc, char const *argv[]) {
	std::string s1, s2;
	int flag = 0;
	std::cin >> s1 >> s2;
	to_upper(s1);
	to_upper(s2);
	for(int i = 0; i <= s1.size()-1; i++) {
		if(s1[i] != s2[i]) {
			flag = 1;
			if(s1[i] > s2[i]) {
				std::cout << 1;
				break;
			} else {
				std::cout << -1;
				break;
			}
		}
	}
	if(flag == 0) std::cout << 0;
	return 0;
}
