#include <iostream>
void to_upper_or_lower(std::string &input, int upper) {
  for(int i = 0; i < input.size(); i++) {
    if(upper == 1) {
      if(input[i] >= 'a' && input[i] <= 'z') {
        input[i] -= 32;
      }
    } else {
      if(input[i] >= 'A' && input[i] <= 'Z') {
        input[i] += 32;
      }
    }
  }
}

int main(int argc, char const *argv[]) {
  std::string input;
  std::cin >> input;
  int upper = 0, lower = 0;
  for(int i = 0; i < input.size(); i++) {
    if(input[i] >= 'a' && input[i] <= 'z') {
      lower += 1;
    }
    if(input[i] >= 'A' && input[i] <= 'Z') {
      upper += 1;
    }
  }
  if(upper > lower) {
    to_upper_or_lower(input, 1);
  } else {
    to_upper_or_lower(input, 0);
  }
  std::cout << input;
  return 0;
}
