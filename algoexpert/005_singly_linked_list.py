class LinkedListNode():
    def __init__(self, data):
        self.data = data
        self.next_node = None

    def add_node(self, data):
        if self.data == None:
            self.data = data
        elif self.next_node:
            self.next_node.add_node(data)
        else:
            self.next_node = LinkedListNode(data)

    def print_list(self):
        if self.data:
            print(self.data, "->", end = "")
            if self.next_node:
                return self.next_node.print_list()
            else:
                print("end of list")
                return

def build_linked_list(elements):
    n = len(elements)
    base = LinkedListNode(elements[0])
    for i in range(1, n):
        base.add_node(elements[i])
    return base

base = build_linked_list([1, 2, 3, 4, 5, 6])
base.print_list()
