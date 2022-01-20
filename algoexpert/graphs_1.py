import queue

def dfs(graph, start_node):
    print("dfs traversal: ")
    # STACK
    stack = queue.LifoQueue()
    stack.put(start_node)
    while not stack.empty():
        current_node = stack.get()
        print(current_node)
        for neighbour in graph[current_node]:
            stack.put(neighbour)

def dfs_recursive(graph, start_node):
    print(start_node)
    # stack = queue.LifoQueue()
    for neighbour in graph[start_node]:
        dfs_recursive(graph, neighbour)

def bfs(graph, start_node):
    print("bfs traversal: ")
    # QUEUE
    q = queue.Queue()
    q.put(start_node)
    while not q.empty():
        current_node = q.get()
        print(current_node)
        for neighbour in graph[current_node]:
            q.put(neighbour)

graph = { 'a': ['b', 'c'],
        'b': ['d'],
        'c': ['e'],
        'd': ['f'],
        'e': [],
        'f': []
        }

dfs(graph, 'a')

bfs(graph, 'a')

print("dfs recursive")
dfs_recursive(graph, 'a')
