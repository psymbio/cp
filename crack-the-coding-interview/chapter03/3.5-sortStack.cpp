#include <stack>
#include <iostream>

class sorted_stack {
private:
public:
  std::stack<int> result;
  std::stack<int> temp;

  void push(int n) {
    if(result.empty()) {
      result.push(n);
    } else {
      while(result.top() < n && !result.empty()) {
        temp.push(result.top());
        result.pop();
      }
      result.push(n);
      while(!temp.empty()) {
        result.push(temp.top());
        temp.pop();
      }
    }
  }

  void pop() {
    result.pop();
  }

  void traverse_and_delete() {
    std::cout << "Your stack is: ";
    while(!result.empty()) {
      std::cout << result.top() << "|";
      result.pop();
    }
    std::cout << std::endl;
  }
};


int main(int argc, char *argv[]) {
  sorted_stack stack;
  stack.push(10);
  stack.push(4);
  stack.push(3);
  stack.push(2);
  stack.push(5);
  stack.push(8);

  // fails on the case where result stack becomes empty
  //  terminated by signal SIGSEGV (Address boundary error)
  stack.traverse_and_delete();
  return 0;
}
