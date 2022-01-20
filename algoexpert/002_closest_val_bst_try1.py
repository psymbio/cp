# title: 2 Find Closest Value in BST

# creating a binary search tree
# binary tree -> at most all nodes have two nodes
# on the left side of each node the values could be lesser than that of the node.
# on the right greater than.
# elements are always unique

# searching elements in a bst is O(log(N)) because in every iteration we reduce the search space by 1/2

# in all the searches we search left before right
# BFS -> inorder(root in between), pre-order(root before left), post-order(root after right)
# DFS -> inorder, pre-order, post-order

import sys
class BinarySearchTreeNode:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None
    
    def add_child(self, data):
        if data == self.data:
            # if data already exists in tree
            # don't do anything
            return
        if data < self.data:
            # if data being added is less than the current node
            # add it to the left subtree
            if self.left:
                # if left already has a child then call add_child on the left node
                # recursion
                self.left.add_child(data)
            else:
                self.left = BinarySearchTreeNode(data)
        else:
            # add data to right subtree
            if self.right:
                self.right.add_child(data)
            else:
                self.right = BinarySearchTreeNode(data)

    def in_order_traversal(self):
        elements = []
        
        # visit left tree
        if self.left:
            elements += self.left.in_order_traversal()
        
        # visit base node
        elements.append(self.data)

        # visit right node
        if self.right:
            elements += self.right.in_order_traversal()

        return elements

    def search(self, val):
        if self.data == val:
            return True
        if self.data < val:
            # val may be present in the right side
            if self.right:
                return self.right.search(val)
            else:
                return False
        if self.data > val:
            # val may be present in the left side
            if self.left:
                return self.left.search(val)
            else:
                return False

def build_tree(elements):
    root = BinarySearchTreeNode(elements[0])
    for i in range(1, len(elements)):
        root.add_child(elements[i])
    return root

def find_closest_distance(root_node, target, distance):
    if root_node == None:
        return
    print("comparison between: ", abs(root_node.data - target), distance)
    distance = min(abs(root_node.data - target), distance) 
    print("num that succeeds: ", distance)
    find_closest_distance(root_node.left, target, distance)
    find_closest_distance(root_node.right, target, distance)
    return distance

def find_closest(root_node, target):
    distance = find_closest_distance(root_node, target, 10000)
    closest_plus = target + distance
    closest_minus = target - distance
    plus_exists = root_node.search(closest_plus)
    minus_exists = root_node.search(closest_minus)
    if plus_exists:
        return closest_plus
    else:
        return closest_minus
numbers = [17, 4, 1, 20, 9, 23, 18, 34, 18, 4, 3, 5, 6, 10, 20, 49, 280, 28, 45]
numbers_tree = build_tree(numbers)
print(numbers_tree.in_order_traversal())
print(numbers_tree.search(20))
print(numbers_tree.search(100))

print(find_closest(numbers_tree, 30))
# print(numbers_tree.find_closest(100))
