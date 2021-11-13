#include <iostream>
#include <string.h>
void to_lower(std::string &input) {
  // pass by ref to save space
  for(int i = 0; i < input.size(); i++) {
    if(input[i] >= 'A' && input[i] <= 'Z') {
      input[i] += 32;
    }
  }
}

std::string remove_vowels(std::string input) {
  std::string removed_vowels;
  // https://eecs.wsu.edu/~cs150/tutorial/string/soln8_2.html
  char vowels[] = "aeiuoy";
  int flag = 0;
  for(int i = 0; i < input.size(); i++) {
    flag = 0;
    for(int j = 0; j < 6; j++) {
      if(input[i] == vowels[j]) {
        flag = 1;
      }
    }
    if(flag == 0) removed_vowels += input[i];
  }
  return removed_vowels;
}
int main(int argc, char const *argv[]) {
  std::string input, removed_vowels;
  std::cin >> input;
  to_lower(input);
  removed_vowels = remove_vowels(input);
  for(int i = 0; i < removed_vowels.size(); i++) {
    std::cout << "." << removed_vowels[i];
  }
  return 0;
}
