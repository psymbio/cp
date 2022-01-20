class DoublyLinkedListNode():
    def __init__(self, data):
        self.data = data
        self.next_node, self.prev_node = None, None

    def add_node(self, data):
        if self.data == None:
            self.data = data
        elif self.next_node:
            self.next_node.add_node(data)
        else:
            self.next_node = DoublyLinkedListNode(data)
