#include <iostream>
#include <string.h>

int main(int argc, char const *argv[]) {
  std::string input;
  std::cin >> input;
  if(input[0] >= 'a' && input[0] <= 'z') {
    std::cout << (char)(input[0] - 32);
  } else {
    std::cout << input[0];
  }
  for(int i = 1; i < input.size(); i++) {
    std::cout << input[i];
  }
  return 0;
}
