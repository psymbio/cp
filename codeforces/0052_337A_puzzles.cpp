#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
void display(std::vector <int> input) {
  for(int i = 0; i < input.size(); i++) {
    std::cout << input[i] << " ";
  }
}
int main(int argc, char const *argv[]) {
  int n, m;
  std::cin >> n >> m;
  std::vector <int> puzzles(m);
  for(int i = 0; i < m; i++) {
    std::cin >> puzzles[i];
  }
  int min = INT_MAX;
  std::sort(puzzles.begin(), puzzles.end(), std::greater<int>());
  // display(puzzles);
  for(int i = 0; i < m; i++) {
    if(i + n - 1 < m) {
      // std::cout << "considering: " << puzzles[i] << " and " << puzzles[i + n - 1];
      min = std::min(min, puzzles[i] - puzzles[i + n - 1]);
    } else {
      break;
    }
  }
  std::cout << min;
  return 0;
}
