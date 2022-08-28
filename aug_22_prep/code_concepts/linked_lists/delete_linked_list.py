class node:
    def __init__(self, val):
        self.val = val
        self.next = None
    
class linkedList:
    def __init__(self):
        self.head = None
    
    def insert(self, val):
        if self.head == None:
            self.head = node(val)
        else:
            new_node = node(val)
            new_node.next = self.head
            self.head = new_node
    
    def delete_entire(self):
        temp = self.head
        while temp:
            del temp.val
            temp = temp.next

    def print(self):
        temp = self.head
        while temp.next:
            print(temp.val, "->", end="", sep="")
            temp = temp.next
        print(temp.val)

def create_ll_from_array(array):
    head = linkedList()
    for element in array:
        head.insert(element)
    head.print()
    return head

ll = create_ll_from_array([1, 2, 3, 4, 5])
ll.delete_entire()
ll.print()