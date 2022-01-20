import queue

edge_list = [['i', 'j'], ['k', 'i'], ['m', 'k'], ['k', 'l'], ['o', 'n']]

def dfs(adj_list, start_node, destination):
    stack = queue.LifoQueue()
    stack.put(start_node)
    # adj_list[start_node]["visited"] = True

    while not stack.empty():
        current_node = stack.get()
        print(current_node)
        if current_node == destination:
            return True
        if adj_list[current_node]["visited"] == False:
            for neighbour in adj_list[current_node]["nodes"]:
                stack.put(neighbour)
                adj_list[neighbour]["visited"] = True
        else:
            print("already visited: ", current_node)
            for neighbour in adj_list[current_node]["nodes"]:
                if adj_list[neighbour]["visited"] == False:
                    stack.put(neighbour)
def edge_list_to_adj_list(edge_list):
    adj_list = {}
    for two_edges in edge_list:
        for i, edge in enumerate(two_edges):
            if edge in adj_list:
                adj_list[edge]["nodes"].append(two_edges[(i + 1) % 2])
            else:
                adj_list[edge] = {
                        "nodes" : [two_edges[(i + 1) % 2]],
                        "visited": False
                        }
        print(adj_list)
    return adj_list

adj_list = edge_list_to_adj_list(edge_list)
dfs(adj_list, 'i', 'l')
