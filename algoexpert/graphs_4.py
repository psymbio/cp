import queue

def dfs_traversal(graph, start_node, visited):
    stack = queue.LifoQueue()
    if start_node not in visited:
        stack.put(start_node)
    else:
        return visited, False
    while not stack.empty():
        current_node = stack.get()
        print(current_node, end="->")
        visited.append(current_node)
        for neighbour in graph[current_node]:
            if neighbour not in visited:
                stack.put(neighbour)
    return visited, True

def count_connected_components(graph):
    visited = []
    count = 0
    for node in graph:
        visited, bool = dfs_traversal(graph, node, visited)
        print("\n")
        if bool == True:
            count += 1
    return count

graph = {
  3: [],
  4: [6],
  6: [4, 5, 7, 8],
  8: [6],
  7: [6],
  5: [6],
  1: [2],
  2: [1]
}

print("dfs traversal")
# dfs_traversal(graph, 1)
print("count connected")
print(count_connected_components(graph))
