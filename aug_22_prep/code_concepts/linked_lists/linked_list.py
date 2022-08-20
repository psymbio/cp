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
            # how is this even working
            # https://stackoverflow.com/questions/3106689/pointers-in-python
            # somehow this is acting like a reference.
            # object are reference python
            # references in python

            # https://www.pythontutorial.net/advanced-python/python-references/

            new_node = node(val)
            temp = self.head
            while temp.next:
                temp = temp.next
            temp.next = new_node
    
    def playing_with_ref(self, val):
        if self.head == None:
            self.head = node(val)
        else:
            new_node = node(val)
            # this has modified head to be equal to one
            temp = self.head
            print(id(self.head))
            print(id(temp))
            temp = 1
    
    def find(self, target):
        if self.head == None:
            return -1
        else:
            temp = self.head
            while temp:
                if temp.val == target:
                    return 1
                temp = temp.next
        return -1
    
    # delete node from linked list
    def delete(self, target):
        if self.head == None:
            return
        else:
            # why does this not work?
            temp = self.head
            while temp:
                if temp.val == target:
                    print("found val")
                    temp.val = temp.next
                temp = temp.next
        return self.head
    
    # see this: https://github.com/psymbio/cp/blob/ae039c4b043befd2cf2eb5771e2b7ca409d4c88c/elements/chapter07/linked_list.py
    def delete_2(self, target):
        # even this does not work
        if self.head.val == target:
            self.head = self.head.next
        else:
            if self.head.next:
                self.head.next.delete_2(target)
            else:
                print("not found")
    
    def delete_3(self, target):
        if self.head == None:
            return
        else:
            temp = self.head
            while temp:
                if temp.val == target:
                    print("found val")
                    temp.val = 0
                temp = temp.next
        return self.head
    
    def delete_4(self, target):
        # this also doesn't work
        if self.head == None:
            return
        else:
            temp = self.head
            prev = temp
            while temp:
                if temp.val == target:
                    print("found val")
                    while prev.next:
                        print(prev.val, "->", end="", sep="")
                        prev = prev.next
                    print(prev.val)
                    print("")
                temp = temp.next
                prev = temp
        return self.head
    
    def delete_5(self, target):
        # this finally works

        # 5->4->3->2->1
        # if you want to delete 3
        # then basically, you want to join
        # 5->4-> and 2->1
        if self.head == None:
            return
        elif self.head.val == target:
            self.head = self.head.next
            return
        else:
            curr = self.head
            prev = None
            while curr:
                if curr.val == target:
                    prev.next = curr.next
                    return self.head
                prev = curr
                curr = curr.next
        return self.head
    
    def delete_all_occurences(self, target):
        if self.head == None:
            return
        else:
            curr = self.head
            prev = None
            while curr:
                if curr.val == target:
                    prev.next = curr.next
                prev = curr
                curr = curr.next
        return self.head

    def print(self):
        temp = self.head
        while temp.next:
            print(temp.val, "->", end="", sep="")
            temp = temp.next
        print(temp.val)

def add_elements_in_ll(array):
    head = linkedList()
    for element in array:
        head.insert(element)
    head.print()
    return head

ll_1 = add_elements_in_ll([1, 2, 3, 4, 5])
ll_1.delete_5(9)
ll_1.delete_5(3)
ll_1.delete_5(1)
ll_1.delete_5(5)
ll_1.print()