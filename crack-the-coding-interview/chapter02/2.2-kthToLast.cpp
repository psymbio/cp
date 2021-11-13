#include <iostream>

struct Node {
  int data;
  Node *next;
};

class LinkedList {
private:
  Node* head;

public:
  LinkedList () {
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

  void kthToLast(int k) {
    Node* runner1 = head;
    Node* runner2 = head;

    // two runners one covers the field till k
    // and then you tell them both to keep running
    // till that first runner reaches the end of the field 
    for(int i = 0; i < k; i++) {
      runner1 = runner1->next;
    }
    while(runner1) {
      runner1 = runner1->next;
      runner2 = runner2->next;
    }

    std::cout << "Value at kth to last: " << runner2->data;
  }
};

int main(int argc, char *argv[]) {
  LinkedList l;
  int values[10] = {1, 1, 1, 2, 2, 4, 3, 3, 3, 5};
  int n = sizeof(values)/sizeof(values[0]);
  l.insert_array(values, n);
  l.display();
  l.kthToLast(4);
  return 0;
}
