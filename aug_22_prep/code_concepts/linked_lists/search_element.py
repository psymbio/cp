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
    
    def insert_at_end(self, val):
        if self.head == None:
            self.head = node(val)
        else:
            new_node = node(val)
            temp = self.head
            while temp.next:
                temp = temp.next
            temp.next = new_node
    
    def print(self):
        temp = self.head
        while temp.next:
            print(temp.val, "->", end="", sep="")
            temp = temp.next
        print(temp.val)
    
    def search(self, target):
        temp = self.head
        count = 0
        while temp:
            if temp.val == target:
                print("target found at:", count)
                return
            temp = temp.next
            count += 1
        print("val not found")


def create_ll_from_array(array):
    head = linkedList()
    for element in array:
        head.insert(element)
    head.print()
    return head

ll = create_ll_from_array([1, 2, 3, 4, 5])
ll.search(4)
ll.search(10)

