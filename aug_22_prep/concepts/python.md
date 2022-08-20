https://stackoverflow.com/questions/5900578/how-does-collections-defaultdict-work

Hoisting in javascript

interview questions javascript

https://www.interviewkickstart.com/interview-questions/python-scripting-interview-questions

https://www.programiz.com/article/python-self-why

how is this even working
```python
def insert_at_end(self, val):
        if self.head == None:
            self.head = node(val)
        else:
            new_node = node(val)
            temp = self.head
            while temp.next:
                temp = temp.next
            temp.next = new_node
```
https://stackoverflow.com/questions/3106689/pointers-in-python
somehow this is acting like a reference.
object are reference python
references in python
https://www.pythontutorial.net/advanced-python/python-references/


http://neopythonic.blogspot.com/2008/10/why-explicit-self-has-to-stay.html


shallow copy, deep copy and references and stuff
IMP: READ THIS!
https://levelup.gitconnected.com/understanding-reference-and-copy-in-python-c681341a0cd8

## Advanced Python
https://www.pythontutorial.net/advanced-python/

Doubt:

```python
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
    
    def playing_with_ref(self, val):
        if self.head == None:
            self.head = node(val)
        else:
            new_node = node(val)
            # this has modified head to be equal to one
            temp = self.head
            temp = 1

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

def add_elements_in_ll_2(array):
    head = linkedList()
    for element in array:
        head.playing_with_ref(element)
    head.print()
    return head

ll_1 = add_elements_in_ll([1, 2, 3, 4, 5])
ll_2 = add_elements_in_ll_2([1, 2, 3, 4, 5])
```

Here how does printing not make the linked list to be just the last node, but the function `playing_with_ref` modifies the linked list to just be equal to the value 1.