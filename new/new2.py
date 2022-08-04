class Node:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.val = key
# A function to do inorder tree traversal
def printInorder(root, statement):
    if root:
        # First recur on left child
        print(statement)
        printInorder(root.left, "going to"+ str(root.left.val))
        # then print the data of node
        print(root.val),
        # now recur on right child
        printInorder(root.right, "going to" + str(root.right.val))
         
 
# Driver code
root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.left.left = Node(4)
root.left.right = Node(5)
 
print("Inorder traversal of binary tree is")
printInorder(root, "at root")