import queue

class BSTNode():
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

    def add_child(self, data):
        if self.data == data:
            return
        if data < self.data:
            # we must go to the left
            if self.left:
                self.left.add_child(data)
            else:
                self.left = BSTNode(data)
        else:
            if self.right:
                self.right.add_child(data)
            else:
                self.right = BSTNode(data)

    def in_order_traversal(self):
        elements = []
        if self.left:
            elements += self.left.in_order_traversal()
        elements += [self.data]
        if self.right:
            elements += self.right.in_order_traversal()
        return elements

# time complexity O(N)
# space complexity O(N/2) or just O(N)
def bfs_traversal(root_node):
    result = []
    q = queue.Queue()
    q.put(root_node)
    while not q.empty():
        q_length = q.qsize()
        print("length: ", q_length)
        level = []
        # we go one level at a time
        # we somehow need to keep track that we complete the level
        for i in range(0, q_length):
            current_node = q.get()
            level += [current_node.data]
            # we want to add the children of this current_node
            if current_node.left:
                q.put(current_node.left)
            if current_node.right:
                q.put(current_node.right)
        result.append(level)
    return result

def build_tree(elements):
    root_node = BSTNode(elements[0])
    for element in elements:
        root_node.add_child(element)
    return root_node

def invert_bst(root_node):
    if root_node:
        root_node.left, root_node.right = invert_bst(root_node.right), invert_bst(root_node.left)
        return root_node

def bfs_invert_bst(root_node):
    q = queue.Queue()
    q.put(root_node)
    while not q.empty():
        current_node = q.get()
        if current_node:
            current_node.left, current_node.right = current_node.right, current_node.left
            q.put(current_node.left)
            q.put(current_node.right)
    return root_node

elements = [5, 3, 7, 2, 4, 6, 8]
# tree:
#     5
#    / \
#   3   7
# /  \ / \
# 2  4 6  8
bst_tree = build_tree(elements)
print("in order traversal")
print(bst_tree.in_order_traversal())
print("bfs traversal")
print(bfs_traversal(bst_tree))
# tree:
#     5
#    / \
#   7   3
# /  \ / \
# 8  6 4  2

# inv_bst_tree = invert_bst(bst_tree)
# print(bfs_traversal(inv_bst_tree))

inv_bst_tree2 = bfs_invert_bst(bst_tree)
print(bfs_traversal(inv_bst_tree2))
