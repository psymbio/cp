#include <iostream>
#include <vector>
#include <algorithm>
int main(int argc, char const *argv[]) {
  int n;
  std::cin >> n;
  std::vector<int> v(n);
  for(int i = 0; i < n; i++) {
    std::cin >> v[i];
  }
  sort(v.begin(), v.end());
  for(int i = 0; i < n-1; i++) {
    std::cout << v[i] << " ";
  }
  std::cout << v[n-1];
  return 0;
}
