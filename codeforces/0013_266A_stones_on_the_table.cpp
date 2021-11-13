#include <iostream>

int main(int argc, char const *argv[]) {
  int n, result = 0;
  std::cin >> n;
  char array[n], temp;
  for(int i = 0; i < n; i++) {
    std::cin >> temp;
    array[i] = temp;
  }
  if(n == 1) {
    std::cout << 0;
  } else {
    for(int i = 1; i < n; i++) {
      if(array[i-1] == array[i]) {
        result++;
      }
    }
    std::cout << result;
  }
  return 0;
}
