#include <iostream>

void display_dragons(int dragons[], int n) {
  std::cout << "dragons now: ";
  for(int i = 1; i < n; i++) {
    std::cout << dragons[i] << " ";
  }
  std::cout << "\n";
}

void kill_x(int x, int dragons[], int n) {
  for(int i = 1; i < n; i++) {
    if((i) % x == 0) {
      dragons[i] = 1;
    }
  }
}

void count_dead(int dragons[], int n) {
  int dead = 0;
  for(int i = 1; i < n; i++) {
    if(dragons[i] == 1) {
      dead++;
    }
  }
  std::cout << dead;
}

int main(int argc, char const *argv[]) {
  int k, l, m, n, d;
  std::cin >> k;
  std::cin >> l;
  std::cin >> m;
  std::cin >> n;
  std::cin >> d;
  d = d + 1;
  int dragons[d] = {0};

  kill_x(k, dragons, d);
  // display_dragons(dragons, d);
  kill_x(l, dragons, d);
  // display_dragons(dragons, d);
  kill_x(m, dragons, d);
  // display_dragons(dragons, d);
  kill_x(n, dragons, d);
  // display_dragons(dragons, d);

  count_dead(dragons, d);
  return 0;
}
