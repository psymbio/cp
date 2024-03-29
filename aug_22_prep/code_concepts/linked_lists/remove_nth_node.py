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
    
    def print(self):
        # why is it in this case that the entire ll doesn't just
        # delete itself?
        # technically temp was referencing it
        temp = self.head
        while temp.next:
            print(temp.val, "->", end="", sep="")
            temp = temp.next
        print(temp.val)
    
    def delete_nth_node(self, n):
        i = 0
        curr = self.head
        prev = None
        if n == 0:
            return self.head.next
        # we're just basically try to manipulate the next pointers
        # of the nodes inside the linked list
        while curr:
            if i == n:
                prev.next = curr.next
                return self.head
            prev = curr
            curr = curr.next
            i += 1
        return self.head

def create_ll_from_array(array):
    head = linkedList()
    for element in array:
        head.insert(element)
    head.print()
    return head

ll = create_ll_from_array([1, 2, 3, 4, 5])
ll.delete_nth_node(1)
ll.print()