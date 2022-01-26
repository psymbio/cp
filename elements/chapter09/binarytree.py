import queue

class Node:
    def __init__(self, data):
        self.data = data
        self.right = None
        self.left = None

    def add_child(self, data):
        if self.data == data:
            return

        if data < self.data:
            # go to the left
            if self.left:
                self.left.add_child(data)
            else:
                self.left = Node(data)
        
        else:
            # go to the right
            if self.right:
                self.right.add_child(data)
            else:
                self.right = Node(data)
    
    def pre_order(self):
        elements = []
        elements.append(self.data)
        if self.left:
            elements += self.left.pre_order()
        if self.right:
            elements += self.right.pre_order()
        return elements

def build_tree(elements):
    root = Node(elements[0])
    for i in range(1, len(elements)):
        root.add_child(elements[i])
    return root

def level_traversal(root):
    q = queue.Queue()
    q.put(root)
    result = []
    while not q.empty():
        to_append = []
        for i in range(0, q.qsize()):
            current_node = q.get()
            to_append.append(current_node.data)
            if current_node.left:
                q.put(current_node.left)
            if current_node.right:
                q.put(current_node.right)
        result.append(to_append)
    return result

def lowest_common_ancestor(root, p, q):
    current_node = root
    while current_node:
        if p < current_node.data and q < current_node.data:
            current_node = current_node.left
        elif p > current_node.data and q > current_node.data:
            current_node = current_node.right
        else:
            return current_node.data

def check_symmetric(left, right):
    if (left == None or right == None):
        return left == right
    if left.data != right.data:
        return False
    return check_symmetric(left.left, right.left) and check_symmetric(left.right, right.left)

def symmetric_tree(root):
    if root == None:
        return True
    return check_symmetric(root.left, root.right)

def branch_sums(root):
    if root == None:
        return []
    sums = []
    calc_branch_sums(root, 0, sums)
    return sums

def calc_branch_sums(root, running_sum, sums):
    if root == None:
        return sums
    new_running_sum = running_sum + root.data
    if root.left == None and root.right == None:
        sums.append([new_running_sum])
    calc_branch_sums(root.left, new_running_sum, sums)
    calc_branch_sums(root.right, new_running_sum, sums)

elements = [6, 2, 8, 0, 4, 7, 9, 3, 5]
bt = build_tree(elements)
print(bt.pre_order())
print(level_traversal(bt))
print(branch_sums(bt))
