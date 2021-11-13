#include <iostream>
#include <vector>
#include <string.h>
// dutch national flag problem
// https://stackoverflow.com/questions/58591912/sorting-array-of-1-2-3-numbers-in-on-time
void swap(char &a, char &b) {
  int temp = a;
  a = b;
  b = temp;
}

void dutch_flag_sort(std::vector<char> &array) {
  char mid_val = '2';
  int start = 0, mid = 0, end = array.size()-1;
  while(mid <= end) {
    if(array[mid] < mid_val) {
      swap(array[start], array[mid]);
      start++;
      mid++;
    } else if(array[mid] > mid_val) {
      swap(array[mid], array[end]);
      end--;
    } else {
      mid++;
    }
  }
}

int main(int argc, char const *argv[]) {
  std::string input;
  std::vector<char> array;
  std::cin >> input;
  for(int i = 0; i < input.size(); ) {
    array.push_back(input[i]);
    i += 2;
  }
  dutch_flag_sort(array);
  for(int i = 0; i < array.size()-1; i++) {
    std::cout << array[i] << "+";
  }
  std::cout << array[array.size()-1];
  return 0;
}
