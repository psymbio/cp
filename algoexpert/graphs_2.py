import queue

def dfs(graph, start_node):
    elements = []
    stack = queue.LifoQueue()
    stack.put(start_node)
    while not stack.empty():
        current_node = stack.get()
        print(current_node)
        elements += [current_node]
        for neighbour in graph[current_node]:
            stack.put(neighbour)
    return elements

def has_path(graph, source, destination):
    elements = dfs(graph, source)
    if destination in elements:
        print("path exists")
    else:
        print("path doesn't exist")

def has_path2(graph, source, destination):
    stack = queue.LifoQueue()
    stack.put(source)
    while not stack.empty():
        current_node = stack.get()
        if current_node == destination:
            return True
        for neighbour in graph[current_node]:
            stack.put(neighbour)
    return False
graph = { 'f': ['g', 'i'],
        'g': ['h'],
        'h': [],
        'i': ['g', 'k'],
        'j': [],
        'k': []
        }

print(has_path2(graph, 'f', 'k'))
print(has_path2(graph, 'f', 'j'))
