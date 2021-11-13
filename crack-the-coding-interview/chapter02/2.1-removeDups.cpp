#include <iostream>
#include <unordered_set>

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
  void insert_array(int values[], int n) {
    for(int i = 0; i < n; i++) {
      insert(values[i]);
    }
  }
  void display() {
      Node* temp = head;
      std::cout << "LinkedList now: ";
      while(temp->next != NULL)
      {
        std::cout << temp->data << "->";
        temp = temp->next;
      }
      std::cout << temp->data;
      std::cout << std::endl;
    }

  void removeDups() {
    std::unordered_set<int> exists;
    Node* current = head;
    Node* previous = NULL;
    while(current != NULL) {
      if(exists.find(current->data) != exists.end()) {
        // if it already exists
        previous->next = current->next;
        delete (current);
        current = previous;
      } else {
        exists.insert(current->data);
        previous = current;
      }
      current = current->next;
    }
  }
};

int main(int argc, char *argv[]) {
  LinkedList l;
  l.insert(1);
  l.insert(1);
  l.insert(1);
  l.insert(2);
  l.insert(2);
  l.insert(4);
  l.insert(3);
  l.insert(3);
  l.insert(3);
  l.insert(5);
  l.display();
  l.removeDups();
  l.display();

  LinkedList l1;
  int values[10] = {1, 1, 1, 2, 2, 4, 3, 3, 3, 5};
  int n = sizeof(values)/sizeof(values[0]);
  l1.insert_array(values, n);
  l1.display();
  l1.removeDups();
  l1.display();
  return 0;
}
