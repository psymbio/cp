#include <iostream>
#include <vector>
#include <algorithm>
// practical solution
/*
123        789         741
456 -rev-> 456 -swap-> 852
789        123         963
*/

void printMatrix(std::vector<std::vector<int> > matrix) {
  for(auto x: matrix){
    for(auto y: x) {
      std::cout << y;
    }
    std::cout << std::endl;
  }
}

void rotateMatrix(std::vector<std::vector<int> > &matrix) {
    std::reverse(matrix.begin(), matrix.end());
    for (int i = 0; i <= matrix.size() - 1; i++) {
        for (int j = i + 1; j <= matrix[i].size()-1; j++)
            std::swap(matrix[i][j], matrix[j][i]);
    }
}

void antiRotateMatrix(std::vector<std::vector<int>> &matrix) {
    for (auto x: matrix) std::reverse(x.begin(), x.end());
    for (int i = 0; i <= matrix.size() - 1; i++) {
        for (int j = i + 1; j <= matrix[i].size()-1; j++)
            std::swap(matrix[i][j], matrix[j][i]);
    }
}

/*
0,0 0,1 0,2 0,3
1,0 1,1 1,2 1,3
2,0 2,1 2,2 2,3
3,0 3,1 3,2 3,3
*/
// https://youtu.be/gCciKhaK2v8
// mesmerizing solution
void rotateMatrix2(std::vector<std::vector<int>> &matrix) {
  int top, first, last, offset;
  for(int layer = 0; layer < matrix.size(); layer++) {
      first = layer;
      last = matrix.size() - 1 - layer;
      for(int i = first; i < last; i++) {
          offset = i - first;
          // top stores first value
          top = matrix[first][i];

          // first stores left value
          matrix[first][i] = matrix[last - offset][first];

          // left stores bottom value
          matrix[last - offset][first] = matrix[last][last - offset];

          // bottom stores right value
          matrix[last][last - offset] = matrix[i][last];

          // right stores top value
          matrix[i][last] = top;
      }
  }
}

int main(int argc, char *argv[]) {
  std::vector<std::vector<int>> original = {{1, 2, 3},
                                            {4, 5, 6},
                                            {7, 8, 9}};
  std::vector<std::vector<int>> matrix = original;
  rotateMatrix2(matrix);
  printMatrix(matrix);
  matrix = original;
  return 0;
}
