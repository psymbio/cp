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

    def print_list(self):
        print(str(self.data) + "->", end="")
        if self.next_node:
            self.next_node.print_list()

    def search_list(self, target):
        if self.data == target:
            print("val found")
        else:
            if self.next_node:
                self.next_node.search_list(target)
            else:
                print("val not found")

    def delete_val(self, target):
        if self.next_node.data == target:
            self.next_node = self.next_node.next_node
        else:
            if self.next_node:
                self.next_node.delete_val(target)
            else:
                print("val not found")

def bfs(root):
    stack = queue.LifoQueue()
    stack.put(root)
    while not stack.empty():
        current_node = stack.get()
        print(str(current_node.data) + "->", end="")
        if current_node.next_node:
            stack.put(current_node.next_node)

def build_linked_list(elements):
    base = Node(elements[0])
    for i in range(1, len(elements)):
        base.add_node(elements[i])

    print("you're tree is")
    base.print_list()

    print("\nsearching for: 5")
    base.search_list(5)

    print("searching for: 8")
    base.search_list(8)

    print("deleting: 3 ")
    base.delete_val(3)
    
    print("you're tree is")
    base.print_list()

    print("\nbfs traversal")
    bfs(base)


build_linked_list([1, 2, 3, 4, 5, 6, 7])

