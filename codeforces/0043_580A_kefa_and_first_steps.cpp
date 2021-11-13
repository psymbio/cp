#include <iostream>
#include <algorithm>
int main(int argc, char const *argv[]) {
  int n, temp_res = 1, result = 0;
  std::cin >> n;
  if(n == 1) {
    std::cout << 1;
    return 0;
  } else if(n == 0) {
    std::cout << 0;
    return 0;
  }
  long long int array[n];
  for (int i = 0; i < n; i++) {
    std::cin >> array[i];
  }
  for (int i = 1; i < n; i++) {
    if(array[i] >= array[i - 1]) {
      temp_res++;
    } else {
      temp_res = 1;
    }
    // std::cout << "result now: " << temp_res;
    result = std::max(temp_res, result);
  }

  std::cout << result;
  return 0;
}
