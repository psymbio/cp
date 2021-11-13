#include <iostream>
#include <string>

struct Node {
  int data;
  Node *next;
};

class LinkedList {
private:
  Node* head;
public:
  LinkedList() {
    head = NULL;
  }

  void insert(int val) {
    Node* new_node = new Node;
    new_node->data = val;
    new_node->next = NULL;

    if(head == NULL) {
      head = new_node;
    } else {
      new_node->next = head;
      head = new_node;
    }
  }

  void insert_array(int n, int array[]) {
    for(int i = 0; i < n; i++) {
      insert(array[i]);
    }
  }

  void display() {
    Node* temp = head;
    std::cout << "Linked list now: ";
    while(temp->next) {
      std::cout << temp->data << "->";
      temp = temp->next;
    }
    std::cout << temp->data << std::endl;
  }

  bool palindrome() {
    Node* temp = head;
    std::string string_linked_list = "";
    while(temp) {
      string_linked_list += std::to_string(temp->data);
      temp = temp->next;
    }

    int left = 0, right = string_linked_list.size() - 1;
    while(left < right) {
      if(string_linked_list[left] != string_linked_list[right]) {
        return false;
      }
      left++;
      right--;
    }
    return true;
  }
};


int main(int argc, char* argv[]) {
  LinkedList l;
  int array[] = {21, 12};
  l.insert_array(2, array);
  l.display();
  l.palindrome() ? std::cout << "It is a palindrome" : std::cout << "It is not a palindrome";
  std::cout << std::endl;

  LinkedList l1;
  int array1[] = {21, 3};
  l1.insert_array(2, array1);
  l1.display();
  l1.palindrome() ? std::cout << "It is a palindrome" : std::cout << "It is not a palindrome";
  std::cout << std::endl;

  return 0;
}
