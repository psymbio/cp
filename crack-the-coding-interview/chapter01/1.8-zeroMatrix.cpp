#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

void printMatrix(std::vector<std::vector<int> > matrix) {
  for(auto x: matrix){
    for(auto y: x) {
      std::cout << y;
    }
    std::cout << std::endl;
  }
}

void zeroMatrix(std::vector<std::vector<int>> &matrix) {
  std::set<int> zero_positions_i;
  std::set<int> zero_positions_j;
  for(int i = 0; i <= matrix.size() - 1; i++) {
    for(int j = 0; j <= matrix[i].size() - 1; j++) {
      if(matrix[i][j] == 0) {
        zero_positions_i.insert(i);
        zero_positions_j.insert(j);
      }
    }
  }
  for(int i = 0; i <= matrix.size() - 1; i++) {
    for(int j = 0; j <= matrix[i].size() - 1; j++) {
      if(zero_positions_i.find(i) != zero_positions_i.end()) {
        matrix[i][j] = 0;
      }
      if(zero_positions_j.find(j) != zero_positions_j.end()) {
        matrix[i][j] = 0;
      }
    }
  }
}

int main(int argc, char *argv[]) {
  std::vector<std::vector<int>> original = {{1, 2, 3, 4, 5, 6, 7, 8, 9},
                                            {1, 0, 3, 4, 5, 6, 7, 8, 9},
                                            {1, 2, 3, 4, 5, 6, 7, 8, 9},
                                            {1, 2, 3, 4, 0, 6, 7, 8, 9},
                                            {1, 2, 3, 4, 5, 6, 7, 8, 9},
                                            {1, 2, 3, 4, 5, 6, 7, 8, 0},
                                          };
  std::vector<std::vector<int>> matrix = original;
  zeroMatrix(matrix);
  printMatrix(matrix);
  matrix = original;
  return 0;
}
