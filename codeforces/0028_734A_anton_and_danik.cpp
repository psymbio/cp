#include <iostream>
#include <string.h>

int main(int argc, char const *argv[]) {
  int n;
  std::cin >> n;
  char temp;
  int a = 0, d = 0;
  for(int i = 0; i < n; i++) {
    std::cin >> temp;
    if(temp == 'A') {
      a++;
    } else if(temp == 'D') {
      d++;
    }
  }
  if(a > d) {
    std::cout << "Anton";
  } else if(d > a) {
    std::cout << "Danik";
  } else {
    std::cout << "Friendship";
  }
  return 0;
}
