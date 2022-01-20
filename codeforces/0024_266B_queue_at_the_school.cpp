#include <iostream>
#include <string.h>
void swap(char &a, char &b) {
	char temp = a;
	a = b;
	b = temp;
}
int main(int argc, char const *argv[]) {
	int n, t;
	std::cin >> n >> t;
	char array[n], temp;
	for(int i = 0; i < n; i++) {
		std::cin >> temp;
		array[i] = temp;
	}
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < n-1; j++) {
			if(array[j] == 'B' && array[j+1] == 'G') {
				swap(array[j], array[j+1]);
				j++;
			}
		}
	}
	array[n] = '\0';
	std::cout << array << '\n';
	return 0;
}
