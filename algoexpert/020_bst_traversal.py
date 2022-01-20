class BinarySearchTreeNode():
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

    def add_child(self, data):
        if self.data == None:
            self.data = data
        if data < self.data:
            # go to the left
            if self.left:
                self.left.add_child(data)
            else:
                self.left = BinarySearchTreeNode(data)
        if data > self.data:
            # go to the left
            if self.right:
                self.right.add_child(data)
            else:
                self.right = BinarySearchTreeNode(data)

    def in_order_traversal(self):
        # left, root, right
        elements = []
        if self.left:
            elements += self.left.in_order_traversal()
        elements.append(self.data)
        if self.right:
            elements += self.right.in_order_traversal()
        return elements
    # TODO: something's wrong in these traversals
    def pre_order_traversal(self):
        # root, left, right
        elements = []
        elements.append(self.data)
        if self.left:
            elements += self.left.in_order_traversal()
        if self.right:
            elements += self.right.in_order_traversal()
        return elements

    def post_order_traversal(self):
        # left, right, root
        elements = []
        if self.left:
            elements += self.left.in_order_traversal()
        if self.right:
            elements += self.right.in_order_traversal()
        elements.append(self.data)
        return elements

def build_tree(array):
    root = BinarySearchTreeNode(array[0])
    for i in range(0, len(array)):
        root.add_child(array[i])
    return root

elements = [1, 2, 34, 2, 1, 3, 78, 29, 28, 2]
root_node = build_tree(elements)
print("in order traversal: ", root_node.in_order_traversal())
print("pre order traversal: ", root_node.pre_order_traversal())
print("post order traversal: ", root_node.post_order_traversal())
