#include <iostream>
#include <limits>

int main(int argc, char const *argv[]) {
  int n;
  std::cin >> n;
  int heights[n];
  int max = INT_MIN, min = INT_MAX;
  for(int i = 0; i < n; i++) {
    std::cin >> heights[i];
    max = std::max(max, heights[i]);
    min = std::min(min, heights[i]);
  }
  if(heights[0] == min && heights[n - 1] == max) {

  }
  return 0;
}
