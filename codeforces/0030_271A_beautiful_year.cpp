#include <iostream>
#include<string>
#include<set>
bool unique(std::string input) {
	std::set<char> chars;
	for(char c: input) {
		chars.insert(c);
	}
	if(chars.size() == input.size()) {
		return true;
	}
	return false;
}
int main(int argc, char const *argv[]) {
	int y;
	std::cin >> y;
	for(int i = y+1; i <= 9000; i++) {
		bool temp = unique(std::to_string(i));
		if(temp == true) {
			std::cout << i;
			return 0;
		}
	}
	return 0;
}
