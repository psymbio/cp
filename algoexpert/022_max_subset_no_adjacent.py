array = [7, 10, 12, 7, 9, 14]

def max_subset(array):
    max_sums = [0] * len(array)
    max_sums[0] = array[0]
    max_sums[1] = array[1]
    for i in range(2, len(array)):
        max_sums[i] = max(max_sums[i - 1], max_sums[i - 2] + array[i])
    return max(max_sums)

print(max_subset(array))
