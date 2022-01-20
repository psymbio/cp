# time complexity: O(nd)
# space: O(n)
def min_num(n, denoms):
    ways = [float('inf') for i in range(0, n + 1)]
    ways[0] = 0
    for denom in denoms:
        for i in range(0, n + 1):
            if denom <= i:
                ways[i] = min(ways[i], 1 + ways[i - denom])
        print(ways)
    return ways[n] if ways[n] != float('inf') else -1

print(min_num(6, [1, 2, 4]))
