#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
	std::string num1, num2, result;
	std::cin >> num1 >> num2;
	for(int i = 0; i < num1.size(); i++) {
		if(num1[i] == num2[i]) {
			result += '0';
		} else {
			result += '1';
		}
	}
	std::cout << result;
	return 0;
}
