#include <iostream>
#include <algorithm>
int main(int argc, char const *argv[]) {
  int n;
  std::cin >> n;
  int coins[n], brother_amount = 0, my_amount = 0, coin_counter = 0;
  for(int i = 0; i < n; i++) {
    std::cin >> coins[i];
    brother_amount += coins[i];
  }
  std::sort(coins, coins + n, std::greater<int>());
  // take coins with greater amounts
  for(int i  = 0; i < n; i++) {
    my_amount += coins[i];
    brother_amount -= coins[i];
    coin_counter++;
    if(my_amount > brother_amount) {
      break;
    }
  }
  std::cout << coin_counter;
  return 0;
}
