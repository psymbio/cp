class Node:
 
    # Constructor to create a new node
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None
 
# Compute the "maxDepth" of a tree -- the number of nodes
# along the longest path from the root node down to the
# farthest leaf no 
def maxDepth(node, statement):
    if node is None:
        return -1 ;
 
    else :
 
        # Compute the depth of each subtree
        print(statement)
        try:
            lDepth = maxDepth(node.left, "going left " + str(node.left.data))
        except:
            lDepth = maxDepth(node.left, "none")
        try:
            rDepth = maxDepth(node.right, "going right " + str(node.right.data))
        except:
            rDepth = maxDepth(node.right, "none")
 
        # Use the larger one
        if (lDepth > rDepth):
            return lDepth+1
        else:
            return rDepth+1
 
 
# Driver program to test above function
root = Node(1)
root.left = Node(2)
root.right = Node(3)
root.right.left = Node(8)
root.right.right = Node(9)
root.left.left = Node(4)
root.left.left.left = Node(6)
root.left.left.right = Node(7)
root.left.right = Node(5)

 
 
print ("Height of tree is %d" %(maxDepth(root, "on root")))