#include <iostream>
#include <stack>
class my_queue {
private:
public:
  std::stack<int> stack1;
  std::stack<int> stack2;

  void push(int n) {
    if(stack1.empty()) {
      stack1.push(n);
    } else {
      while(!stack1.empty()) {
        stack2.push(stack1.top());
        stack1.pop();
      }
      stack1.push(n);
      while(!stack2.empty()) {
        stack1.push(stack2.top());
        stack2.pop();
      }
    }
  }

  void pop() {
    stack1.pop();
  }

  void traverse_and_delete() {
    std::cout << "Your queue is: ";
    while(!stack1.empty()) {
      std::cout << stack1.top() << "|";
      stack1.pop();
    }
    std::cout << std::endl;
  }
};

int main(int argc, char* argv[]) {
  my_queue stack;
  stack.push(10);
  stack.push(4);
  stack.push(3);
  stack.push(2);
  stack.push(5);
  stack.push(8);
  stack.traverse_and_delete();
  return 0;
  return 0;
}
