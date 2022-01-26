import queue

class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

    def add_child(self, data):
        if self.data == data:
            return
        if self.data > data:
            # go left
            if self.left:
                self.left.add_child(data)
            else:
                self.left = Node(data)
        else:
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

def level_order_traversal(root):
    result = []
    q = queue.Queue()
    q.put(root)
    while not q.empty():
        level = []
        for i in range(0, q.qsize()):
            current_node = q.get()
            level.append(current_node.data)
            if current_node.left:
                q.put(current_node.left)
            if current_node.right:
                q.put(current_node.right)
        result.append(level)
    return result

def root_to_leaf_sum(root):
    sums = []
    if root == None:
        return sums
    calc_branch_sum(root, 0, sums)
    return sums

def calc_branch_sum(node, running_sum, sums):
    if node == None:
        return
    new_running_sum = running_sum + node.data
    if node.left == None and node.right == None:
        sums.append([new_running_sum])
        return
    calc_branch_sum(node.left, new_running_sum, sums)
    calc_branch_sum(node.right, new_running_sum, sums)

def go_boundary(root):
    all_elements = [root.data]
    left_elements = []
    stack = queue.LifoQueue()
    stack.put(root.left)
    while not stack.empty():
        current_node = stack.get()
        left_elements.append(current_node.data)
        if current_node.left:
            stack.put(current_node.left)
    return left_elements

def vertical_order(root):
    vertical_hash = {}
    go_vertical(root, 0, 0, vertical_hash)
    return vertical_hash

def go_vertical(node, hash_num, old_hash, vertical_hash):
    new_hash_num = hash_num + old_hash
    if node == None:
        return
    else:
        if new_hash_num in vertical_hash:
            vertical_hash[new_hash_num].append(node.data)
        else:
            vertical_hash[new_hash_num] = [node.data]

    go_vertical(node.left, -1, new_hash_num, vertical_hash)
    go_vertical(node.right, +1, new_hash_num, vertical_hash)

elements = [6, 2, 8, 0, 4, 7, 9, 3, 5]
bt = build_tree(elements)
print(bt.pre_order())
print(level_order_traversal(bt))
print(root_to_leaf_sum(bt))
# print(go_left(bt))
print(vertical_order(bt))
