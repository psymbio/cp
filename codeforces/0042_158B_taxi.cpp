#include <iostream>
int main(int argc, char const *argv[]) {
  int n;
  std::cin >> n;
  int friends[n], taxis_needed = 0, count_4, count_3, count_2, count_1;
  count_4 = count_3 = count_2 = count_1 = 0;
  for(int i = 0; i < n; i++) {
    std::cin >> friends[i];
    if(friends[i] == 4) {
      taxis_needed++;
    } else if(friends[i] == 3) {
      count_3++;
    } else if(friends[i] == 2) {
      count_2++;
    } else if(friends[i] == 1) {
      count_1++;
    }
  }

  std::cout << taxis_needed;
  return 0;
}
