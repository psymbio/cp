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
    
    def length(self):
        # get length of a linked list iteratively
        result = 0
        temp = self.head
        while temp:
            temp = temp.next
            result += 1
        return result

    def length_2(self):
        # get length of a linked list recursively
        pass           

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
print("length of the linkedlist is: ", ll.length())