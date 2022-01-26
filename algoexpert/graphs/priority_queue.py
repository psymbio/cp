import queue

pq = queue.PriorityQueue()
pq.put((1, "hello"))
pq.put((17, "seventeen"))
pq.put((2, "second"))

while not pq.empty():
    print(pq.get()[1])
