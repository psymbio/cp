import queue

# title: largest connected components
# title2: shortest path

def dfs_traversal(graph, start_node, visited):
    stack = queue.LifoQueue()
    print("\n")
    node_length = 0
    if start_node not in visited:
        stack.put(start_node)
        visited.append(start_node)
        node_length += 1
    else:
        return visited, False, node_length
    while not stack.empty():
        current_node = stack.get()
        visited.append(current_node)
        print(current_node, end="->")
        # print("visited: ", visited)
        for neighbour in graph[current_node]:
            if neighbour not in visited:
                stack.put(neighbour)
                node_length += 1
    return visited, True, node_length

def largest_connected(graph):
    how_many_visited = 0
    longest_node_length = 0
    shortest_node_length = float('inf')
    visited = []
    for node in graph:
        visited, whether_visited, node_length = dfs_traversal(graph, node, visited)
        
        longest_node_length = max(longest_node_length, node_length)
        if whether_visited:
            shortest_node_length= min(shortest_node_length, node_length)
        if whether_visited:
            how_many_visited += 1
    return longest_node_length, shortest_node_length, how_many_visited


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

graph2 = {
  0: [4,7],
  1: [],
  2: [],
  3: [6],
  4: [0],
  6: [3],
  7: [0],
  8: []
}
print(largest_connected(graph2))
