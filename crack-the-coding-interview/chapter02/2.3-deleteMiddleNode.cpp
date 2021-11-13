#include <iostream>

struct Node {
  int data;
  Node* next;
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
    if (head == NULL) {
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

  bool deleteMiddleNode() {
    Node* temp = head;
    if(temp == NULL || temp->next == NULL || temp->next->next == NULL) {
      // considering that we need at least 3 to find a middle node
      return 0;
    }
    Node* next_next = temp->next->next;
    temp = temp->next;
    free(temp);
    head->next = next_next;
    return true;
  }
};
