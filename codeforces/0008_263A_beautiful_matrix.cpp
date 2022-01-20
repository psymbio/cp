#include <iostream>
#include <stdlib.h>
// obviously that shortest distance
// is just distance of the 1 from both the center
// from the rows and columns

int main(int argc, char const *argv[]) {
	int array[5][5], pos_i, pos_j;
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			std::cin >> array[i][j];
			if(array[i][j] == 1) {
				pos_i = i;
				pos_j = j;
			}
		}
	}
	int center = 2;
	std::cout << abs(center - pos_i) + abs(center - pos_j);
	return 0;
}
