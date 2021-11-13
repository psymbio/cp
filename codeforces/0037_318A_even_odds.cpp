#include <iostream>
int main(int argc, char const *argv[]) {
  unsigned long long int n, k, i = 0, j = 1, l = 0, filled_till = 0;
  std::cin >> n >> k;
  // std::cout << "k: " << k << "\n";
  unsigned long long int odd_evens[n];
  if(n % 2 == 0) {
    for(i = 0, l = 0; l < n/2; i++) {
      if(i % 2 != 0) {
        filled_till++;
        odd_evens[l] = i;
        l++;
        // std::cout << i << " ";
      } else {
        continue;
      }
    }
} else {
  for(i = 0, l = 0; l < n/2 + 1; i++) {
    if(i % 2 != 0) {
      filled_till++;
      odd_evens[l] = i;
      l++;
      // std::cout << i << " ";
    } else {
      continue;
    }
  }
}
  for(i = filled_till, j = 1; i < n; j++) {
    if(j % 2 == 0) {
      odd_evens[i] = j;
      // std::cout << j << " ";
      i++;
    } else {
      continue;
    }
  }
  /*
  std::cout << "array: ";
  for(i = 0; i < n; i++) {
    std::cout << odd_evens[i] << " ";
  }
  */

  std::cout << odd_evens[k-1];
  return 0;
}
