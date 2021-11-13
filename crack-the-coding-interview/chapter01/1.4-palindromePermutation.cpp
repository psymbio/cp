#include <iostream>
#include <string>

bool palindromePermutation(std::string input_string) {
  int char_freq[57] = {0};
  for(int i = 0; i <= input_string.size() - 1; i++) {
    char_freq[input_string[i] - 'A']++;
  }
  int flag = 0;
  for(int i = 0; i <= 57; i++) {
    // keep adding flag if the occurence of some char is odd
    flag += char_freq[i] % 2;
  }
  std::cout << "Flag now: " << flag << std::endl;
  // one char can appear once like in bab-> a appears once
  // but not more than that
  if(flag <= 1) return true;
  return false;
}
int main(int argc, char *argv[]) {
  std::cout << palindromePermutation("bba") << std::endl;
  std::cout << palindromePermutation("bbaa") << std::endl;
  std::cout << palindromePermutation("bab") << std::endl;
  std::cout << palindromePermutation("racecar") << std::endl;
  std::cout << palindromePermutation("raccar") << std::endl;
  std::cout << palindromePermutation("abbb") << std::endl;
  std::cout << palindromePermutation("giraffe") << std::endl;
  return 0;
}
