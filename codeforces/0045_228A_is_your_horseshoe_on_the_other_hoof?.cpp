#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
int main(int argc, char const *argv[]) {
  std::set<long long int> a;
  long long int temp;
  for(int i = 0; i < 4; i++) {
    std::cin >> temp;
    a.insert(temp);
  }
  long long int to_buy = 4 - a.size();
  std::cout << to_buy;
  return 0;
}
