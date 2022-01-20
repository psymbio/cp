class BinarySearchTreeNode():
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

    def add_child(self, data):
        if self.data == None:
            self.data = data
        elif data < self.data:
            if self.left:
                self.left.add_child(data)
            else:
                self.left = BinarySearchTreeNode(data)
        elif data > self.data:
            if self.right:
                self.right.add_child(data)
            else:
                self.right = BinarySearchTreeNode(data)

    def in_order_traversal(self):
        elements = []
        if self.left:
            elements += self.left.in_order_traversal()
        elements.append(self.data)
        if self.right:
            elements += self.right.in_order_traversal()
        return elements

    def contains(self, target):
        if target in self.in_order_traversal():
            return True
        return False

    # TODO: see why this search is messed up, it's like literally correct
    def search(self, target):
        print(self.data)
        if self.data == target:
            print("val exists")
            return True
        elif self.data > target:
            print("goes left")
            if self.left:
                self.left.search(target)
            else:
                return False
        elif self.data < target:
            print("goes right")
            if self.right:
                self.right.search(target)
            else:
                return False

    # TODO: learn the delete function in BinarySearchTreeNode
    def delete(self, val):
        if val < self.data:
            if self.left:
                self.left = self.left.delete(val)
        elif val > self.data:
            if self.right:
                self.right = self.right.delete(val)
        else:
            if self.left is None and self.right is None:
                return None
            elif self.left is None:
                return self.right
            elif self.right is None:
                return self.left

            min_val = self.right.find_min()
            self.data = min_val
            self.right = self.right.delete(min_val)

    def find_max(self):
        if self.right is None:
            return self.data
        return self.right.find_max()

    def find_min(self):
        if self.left is None:
            return self.data
        return self.left.find_min()
        
def build_tree(array):
    root = BinarySearchTreeNode(array[0])
    for i in range(0, len(array)):
        root.add_child(array[i])
    return root

elements = [1, 2, 34, 2, 1, 3, 78, 29, 28, 2]
root_node = build_tree(elements)
print("in order traversal: ", root_node.in_order_traversal())
print("search for 2: ", root_node.search(2))
