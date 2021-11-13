#include <iostream>
#include <string>

std::string stringCompression(std::string input_string) {
  // time complexity O(n)
  // space complexity O(n)
  std::string result = "";
  int j = 0;
  int count = 0;
  int flag = 0;
  for(int i = 0; i <= input_string.size() - 1; ) {
    j = i + 1;
    count = 1;
    flag = 0;

    result += input_string[i];
    while(input_string[i] == input_string[j]) {
      flag = 1;
      j++;
      count++;
    }
    result += count + '0';
    i += (flag==1)? count : 1;
  }
  return result;
}

int main(int argc, char *argv[]) {
    std::cout << stringCompression("aabcccccaaa");
    return 0;
}
