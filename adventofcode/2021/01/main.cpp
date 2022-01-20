#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>

void task_1(std::string filename) {
	int line, previous = -1, count = 0;
        std::ifstream input_file(filename);
        while (input_file >> line) {
                if(previous < line)
                        count++;
                // std::cout << line << std::endl;
                previous = line;
        }
        input_file.close();
        std::cout << count - 1 << std::endl;
}

void task_2(std::string filename) {
	// space complexity is fucked
	int line, previous = -1, count = 0, line_number = 0;
        std::vector<int> all;
        std::ifstream input_file(filename);
        while (input_file >> line) {
                all.push_back(line);
                line_number++;
        }
        std::vector<int> sums;
        for (int i = 2; i < line_number; i++) {
                sums.push_back(all[i] + all[i - 1] + all[i - 2]);
        }
        for (int i = 0; i < sums.size(); i++) {
                if(previous < sums[i])
                        count++;
                // std::cout << line << std::endl;
                previous = sums[i];
        }
        input_file.close();
        std::cout << count - 1 << std::endl;
}

void task_2_v2(std::string filename) {
	int a, b, c, d, line, count = 0;
	std::ifstream input_file(filename);

	while (input_file >> line) {
		 a = b;
		 b = c;
		 c = d;
		 d = line;
		 
		 if(a + b + c < b + c + d) {
			 count++;
		}
	}
	std::cout << count;
}
int main() {
	task_1("input.txt");
	task_2("input.txt");
	task_2_v2("input.txt");
	return 0;
}
