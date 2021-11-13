#include <iostream>
#include <string>
void caps_lock(std::string &input) {
  char u;
  /*
  if(input[0] >= 'a' && input[0] <= 'z') {
    input[0] -= 32;
  }
  for(int i = 1; i < input.size(); i++) {
    if(input[i] >= 'A' && input[i] <= 'Z') {
      input[i] += 32;
    }
  }
  */

  for(int j = 0; j < input.length(); j++) {
    if(islower(input[j]))
      u = toupper(input[j]);
    else
      u = tolower(input[j]);
      std::cout << u;
  }
}
int main(int argc, char const *argv[]) {
  std::string input;
  std::cin >> input;
  bool c = true;
  for(int i = 1; i < input.length(); i++) {
    if(islower(input[i])) {
      c = false;
    }
  }
  if(c == true) {
    caps_lock(input);
    return 0;
  }
  std::cout << input;
  return 0;
}
