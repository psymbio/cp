#include <iostream>
#include <math.h>
// exploiting the fact: The only line of the input contains two integers a and b (1 ≤ a ≤ b ≤ 10) — the weight of Limak and the weight of Bob respectively.
// mathematically 1x3^n > 1x2^n
// n = ln(10) / ln(3) - ln(2)
// n = 5.7

int main(int argc, char const *argv[]) {
  int a, b;
  std::cin >> a >> b;
  for(int i = 1; i < 10; i++) {
    if(a*pow(3, i) > b*pow(2, i)) {
      std::cout << i;
      return 0;
    }
  }
  return 0;
}
