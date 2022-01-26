def grid_traveller(m, n):
    if m == 0 or n == 0:
        return 0
    if m == 1 and n == 1:
        return 1
    return grid_traveller(m - 1, n) + grid_traveller(m, n - 1)

def grid_traveller_mem(m, n, grid_hash = {}):
    if m == 0 or n == 0:
        return 0
    if m == 1 and n == 1:
        return 1
    if (m, n) in grid_hash:
        return grid_hash[(m, n)]
    grid_hash[(m, n)] = grid_traveller_mem(m - 1, n, grid_hash) + grid_traveller_mem(m, n - 1, grid_hash)
    return grid_hash[(m, n)]


print(grid_traveller_mem(2, 3))
