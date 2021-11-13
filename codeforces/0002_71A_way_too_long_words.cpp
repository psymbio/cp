#include <iostream>
#include <string.h>
int main(int argc, char const *argv[]) {
  int n;
  std::cin >> n;
  std::string temp;
  int temp_size;
  for(int i = 0; i < n; i++) {
    std::cin >> temp;
    temp_size = temp.size();
    if(temp.size() > 10) {
      std::cout << temp[0] << temp_size-2 << temp[temp_size-1] << std::endl;
    } else {
      std::cout << temp << std::endl;
    }
  }
  return 0;
}
