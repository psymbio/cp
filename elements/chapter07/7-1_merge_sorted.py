import queue

class Node:
    def __init__(self, data):
        self.data = data
        self.next_node = None

    def add_node(self, data):
        if self.data == None:
            self.data = data
        else:
            if self.next_node:
                self.next_node.add_node(data)
            else:
                self.next_node = Node(data)
    
    def print_ll(self):
        print(str(self.data) + "->", end="")
        if self.next_node:
            self.next_node.print_ll()

def bfs(base):
    stack = queue.LifoQueue()

def build_ll(elements):
    base = Node(elements[0])
    for i in range(1, len(elements)):
        base.add_node(elements[i])
    return base

def merge_sorted(l1, l2):
    if l1.data < l2.data:
        new_ll, l1 = Node(l1.data), l1.next_node
    else:
        new_ll, l2 = Node(l2.data), l2.next_node

    while l1 and l2:
        # print("\nl1")
        # l1.print_ll()
        # print("\nl2")
        # l2.print_ll()

        if l1.data <= l2.data:
            new_ll.add_node(l1.data)
            l1 = l1.next_node
        else:
            new_ll.add_node(l2.data)
            l2 = l2.next_node

    return new_ll

def remove_duplicates(l1):
    prev_node_data = l1.data
    new_ll = Node(prev_node_data)
    l1 = l1.next_node
    while l1:
        if l1.data != prev_node_data:
            new_ll.add_node(l1.data)
        prev_node_data = l1.data
        l1 = l1.next_node
    return new_ll

def reverse_ll(l1):
    stack = queue.LifoQueue()
    
    while l1:
        stack.put(l1.data)
        l1 = l1.next_node
    
    val = stack.get()
    l2 = Node(val)
    
    while not stack.empty():
        current_node = stack.get()
        l2.add_node(current_node)

    return l2

def is_palin(l1):
    print("in palin")
    slow = l1
    fast = l1
    while fast and fast.next_node:
        fast, slow = fast.next_node.next_node, slow.next_node
    print("slow un rev")
    slow.print_ll()
    slow_rev = reverse_ll(slow)
    print("slow rev ")
    slow_rev.print_ll()
    fast = l1
    while slow_rev and fast:
        if slow_rev.data != fast.data:
            print("not a palindrome")
            return False
        slow_rev = slow_rev.next_node
        fast = fast.next_node
    print("palindrome")
    return True

if __name__ == "__main__":
    A = [1, 2, 3, 3, 4, 4, 5]
    B = [3, 4, 4, 6, 7, 8]
    base_1 = build_ll(A)
    base_2 = build_ll(B)

    print("printing tree 1")
    base_1.print_ll()
    print("\nprinting tree 2")
    base_2.print_ll()

    new_ll = merge_sorted(base_1, base_2)
    print("\nprinting tree merged")
    new_ll.print_ll()

    print("\nprint rem dup")
    rem_dup = remove_duplicates(new_ll)
    rem_dup.print_ll()

    print("\nprint reverse of list")
    rev = reverse_ll(rem_dup)
    rev.print_ll()

    print("\nprint palin")
    num1 = [1, 2, 2, 3, 2, 2, 1]
    num1_ll = build_ll(num1)
    num1_ll.print_ll()
    is_palin(num1_ll)
   
    
    print("\nprint palin")
    num1 = [1, 2, 2, 3, 2]
    num1_ll = build_ll(num1)
    num1_ll.print_ll()
    is_palin(num1_ll)
