from queue import Queue

numbers = [x for x in range(0, 100, 10)]
q = Queue()

for number in numbers:
    print("putting: ", number)
    q.put(number)

while not q.empty():
    print(q.get())
