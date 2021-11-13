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
};
