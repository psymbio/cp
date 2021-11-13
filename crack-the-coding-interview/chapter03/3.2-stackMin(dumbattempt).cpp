#include <iostream>
#include <stack>
#include <climits>

class minStack {
private:
public:
  std::stack<int> stack1;
  int min_element = INT_MAX;
  int prev_min_element = INT_MAX;
  void push(int n) {
    stack1.push(n);
    if(n < min_element) {
      prev_min_element = min_element;
      min_element = n;
    }
  }

  void pop() {
    int top = stack1.top();
    if(top == min_element) {
      min_element = prev_min_element;
    }
    stack1.pop();
  }

  void getMin() {
    if(stack1.empty()) {
      std::cout << "Stack is empty";
    } else {
      std::cout << "The minimum element is: " << min_element;
    }
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
    stack.push(-2); // fails need to think about it

    stack.pop();
    stack.pop();

    stack.getMin();
    return 0;
}
