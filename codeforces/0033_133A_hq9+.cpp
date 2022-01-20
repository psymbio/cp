#include <iostream>
#include <string>
int main(int argc, char const *argv[]) {
	std::string input;
	std::cin >> input;
	int flag = 0;
	for(int i = 0; i < input.size(); i++) {
		if(input[i] >= 33 && input[i] <= 126){
			if(input[i] == 'H' || input[i] == 'Q' || input[i] == '9' || input[i] == '+') {
				flag = 1;
			}
		}
	}
	if(flag == 1) {
		std::cout << "YES";
	} else {
		std::cout << "NO";
	}
	return 0;
}
