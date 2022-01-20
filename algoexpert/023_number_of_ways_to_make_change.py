change = [1, 5, 10, 25]
to_make = 10

# time complexity: 0(nd) time -> n from amount to make, d from length of coin denominations
# space complexity: O(n)

def num_ways(change, to_make):
    ways = [0] * (to_make + 1)
    ways[0] = 1
    for j in range(0, len(change)):
        for i in range(1, len(ways)):
            if change[j] <= i:
                ways[i] += ways[i - change[j]]
            print(ways)
    return ways[to_make]

def num_ways2(denoms, n):
    ways = [0 for amount in range(n+1)]
    ways[0] = 1
    for denom in denoms:
        for amount in range(1, n+1):
            if denom <= amount:
                ways[amount] += ways[amount - denom]
        # print(ways)
    return ways[n]

print(num_ways(change,to_make))
print(num_ways2(change,to_make))
