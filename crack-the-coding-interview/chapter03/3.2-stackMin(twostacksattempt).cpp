#include <iostream>
#include <stack>
#include <climits>

class minStack {
private:
public:
  std::stack<int> stack;
  std::stack<int> min_stack;
  // int min_element = INT_MAX;
  void push(int n) {
    if(min_stack.empty()) {
      min_stack.push(n);
    } else {
      if(n < min_stack.top()) {
        min_stack.push(n);
        // min_element = n;
      }
    }
    stack.push(n);
  }

  void pop() {
    if(stack.top() == min_stack.top()) {
      min_stack.pop();
    }
    stack.pop();
  }

  void get_min() {
    std::cout << min_stack.top() << std::endl;
  }
};

int main(int argc, char *argv[]) {
  minStack stack;
  stack.push(21);
  stack.push(22);
  stack.push(1);
  stack.push(24);
  stack.push(20);
  stack.push(25);
  stack.push(-1);
  stack.push(-2); // not O(1) need because two stck approach
  stack.push(-3);
  stack.push(-5);
  stack.pop();
  stack.pop();
  stack.pop();
  stack.pop();

  stack.get_min();
  return 0;
}
