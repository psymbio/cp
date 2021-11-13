#include <iostream>
#include <set>
#include <string.h>

int main(int argc, char const *argv[]) {
  std::string input;
  std::cin >> input;
  std::set<char> unique;
  for(int i = 0; i < input.size(); i++) {
    unique.insert(input[i]);
  }
  if(unique.size() % 2 != 0) {
    std::cout << "IGNORE HIM!";
  } else {
    std::cout << "CHAT WITH HER!";
  }
  return 0;
}
