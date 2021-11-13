#include <iostream>
#include <vector>
#include <climits>

int main(int argc, char const *argv[]) {
  int n;
  std::cin >> n;
  std::vector <std::pair<long long int, long long int>> pairs(n);
  for(int i = 0; i < n; i++) {
    // std::cout << "pair[" << i << "]: ";
    std::cin >> pairs[i].first >> pairs[i].second;
    // std::cout << std::endl;
  }
  /*
  for(int i = 0; i < n; i++) {
    std::cout << "pair[" << i << "]: ";
    std::cout << pairs[i].first << " " << pairs[i].second;
    std::cout << std::endl;
  }
  */
  int moves[n] = {0};
  for(int i = 0; i < n; i++) {
    if(pairs[i].first % pairs[i].second == 0 || pairs[i].second % pairs[i].first == 0) {
      moves[i] = 0;
    } else if(pairs[i].first > pairs[i].second) {
      moves[i] = pairs[i].second - (pairs[i].first % pairs[i].second);
    } else {
      moves[i] = pairs[i].second - pairs[i].first;
    }
  }
  for(int i = 0; i < n; i++) {
    std::cout << moves[i] << std::endl;
  }
  return 0;
}
