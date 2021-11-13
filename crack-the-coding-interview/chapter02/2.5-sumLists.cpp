#include <iostream>

struct Node {
  int data;
  Node* next;
};

class LinkedList {
private:
public:
  Node* head;
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
    std::cout << std::endl << "LinkedList now: ";
    while(temp->next != NULL) {
      std::cout << temp->data << "->";
      temp = temp->next;
    }
    std::cout << temp->data << std::endl;
  }
};


void sumLists(LinkedList l1, LinkedList l2) {
  LinkedList l3;
  Node* l1_node = l1.head;
  Node* l2_node = l2.head;
  int carry = 0, sum = 0, x = 0, y = 0;
  while(l1_node || l2_node || carry == 1) {
    x = l1_node? l1_node->data: 0;
    y = l2_node? l2_node->data: 0;
    sum = (x + y + carry);
    l3.insert(sum%10);
    carry = sum/10;
    l1_node = l1_node? l1_node->next : NULL;
    l2_node = l2_node? l2_node->next : NULL;
  }
  l3.display();
}

int main(int argc, char *argv[]) {
  LinkedList l1, l2;
  int values1[3] = {7, 1, 6};
  int values2[3] = {5, 9, 2};
  int n = 3;
  l1.insert_array(values1, n);
  l1.display();
  l2.insert_array(values2, n);
  l2.display();
  sumLists(l1, l2);
  return 0;
}
