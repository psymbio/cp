# title: 3 Branch Sums

class BinarySearchTreeNode:
    def __init__(self, data):
        self.data = data
        self.left, self.right = None, None

    def add_child(self, data):
        if self.data == data:
            # data already exists and don't do anything
            return
        if data < self.data:
            # less means go to the left
            if self.left:
                # well, go to that node and then add it
                self.left.add_child(data)
            else:
                self.left = BinarySearchTreeNode(data)
        if data > self.data:
            if self.right:
                self.right.add_child(data)
            else:
                self.right = BinarySearchTreeNode(data)

    def pre_order_traversal(self):
        # root, l, r
        elements = []
        elements.append(self.data)
        if self.left:
            elements += self.left.pre_order_traversal()
        if self.right:
            elements += self.right.pre_order_traversal()
        return elements
    def in_order_traversal(self):
        # left, root, right
        elements = []
        
        # first add from left
        if self.left:
            elements += self.left.in_order_traversal()

        # add now
        elements.append(self.data)

        # then right
        if self.right:
            elements += self.right.in_order_traversal()
        return elements

def build_tree(elements):
    n = len(elements)
    root_node = BinarySearchTreeNode(elements[0])
    for i in range(1, n):
        root_node.add_child(elements[i])
    return root_node

def branch_sums(root_node):
    # takes a root_node and calcs value of sum till a leaf node
    sums = []
    calculate_branch_sum(root_node, 0, sums)
    return sums

def calculate_branch_sum(node, running_sum, sums):
    if node is None:
        return
    new_running_sum = running_sum + node.data
    # we can add it to sums[] if the node is a leaf node
    if node.left is None and node.right is None:
        print("sums now: ", sums)
        sums.append(new_running_sum)
        return
    calculate_branch_sum(node.left, new_running_sum, sums)
    calculate_branch_sum(node.right, new_running_sum, sums)

root_node = build_tree([10, 5, 2, 5, 1, 15, 13, 22, 14])
print("pre order: ", root_node.pre_order_traversal())
print("in order: ", root_node.in_order_traversal())
print("branch sum is:", branch_sums(root_node))
